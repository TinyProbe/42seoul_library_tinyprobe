#include "libft.h"

#define DIGIT   1
#define WSPACE  (1 << 1)

static int		iswhat(int c);
static int		getsign(const char **pstr);
static size_t	dglen(const char *s);

int	ft_atoi(const char *str)
{
	int			sign;
	size_t		dlen;
	const char	*max;

	while (*str && (iswhat(*str) & WSPACE))
		++str;
	sign = getsign(&str);
	dlen = dglen(str);
	max = "9223372036854775808";
	if (sign == 1)
		max = "9223372036854775807";
	if (dlen > 19 || (dlen == 19 && ft_strncmp(str, max, dlen) > 0))
		return (~(sign >> 1));
	return (ft_stoi(str, dlen) * sign);
}

static int	iswhat(int c)
{
	unsigned char	ch;

	ch = c;
	c = 0;
	if (ft_isdigit(ch))
		c += DIGIT;
	if ((ch >= 9 && ch <= 13) || ch == 32)
		c += WSPACE;
	return (c);
}

static int	getsign(const char **pstr)
{
	if (**pstr == '-')
	{
		++(*pstr);
		return (-1);
	}
	else if (**pstr == '+')
		++(*pstr);
	return (1);
}

static size_t	dglen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] && (iswhat(s[len]) & DIGIT))
		++len;
	return (len);
}
