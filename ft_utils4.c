#include "libft.h"

int	ft_tolower(int c)
{
	if (c == -1 || c >= 256)
		return (c);
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	ft_toupper(int c)
{
	if (c == -1 || c >= 256)
		return (c);
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

int ft_stoi(const char *str)
{
  int       sign;
	long long res;

  sign = 1;
	res = 0;
  if (*str == '-' && ++str)
    sign = -1;
	while (*str)
		res = (res * 10) + (*str++ - '0');
	return (res * sign);
}

char	*ft_itoa(int n)
{
	char	buf[20];
	char	*dst;
	int		i;
	size_t	len;

	if (!n)
		return ((char *) ft_memcpy(malloc(2), "0\0", 2));
	i = 0;
	if (n < 0)
		buf[i++] = '-';
	while (n)
	{
		buf[i++] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	buf[i] = '\0';
	ft_rev(buf, buf[0] == '-', i);
	len = ft_strlen(buf);
	dst = (char *) malloc(len + 1);
	if (!dst)
		return (dst);
	return ((char *) ft_memcpy(dst, buf, len + 1));
}
