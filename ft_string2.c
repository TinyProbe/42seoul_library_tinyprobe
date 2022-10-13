#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return ((char *) ft_memchr(s, c, ft_strlen(s) + 1));
}

char	*ft_strdup(const char *s1)
{
	size_t	size;
	void	*res;

	size = ft_strlen(s1) + 1;
	res = malloc(size);
	if (res)
		return ((char *) ft_memcpy(res, s1, size));
	return (res);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = -1;
	while (s[++i])
		f((unsigned int)i, s + i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*dst;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dst = (char *) malloc(len_s1 + len_s2 + 1);
	if (!dst)
		return (dst);
	ft_memcpy(dst, s1, len_s1 + 1);
	ft_memcpy(dst + len_s1, s2, len_s2 + 1);
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	long long	p;

	p = (long long) s;
	while (1)
	{
		if (!((BYTE *) p)[0])
			return (p - (long long) s);
		if (!((BYTE *) p)[1])
			return (p + 1 - (long long) s);
		if (!((BYTE *) p)[2])
			return (p + 2 - (long long) s);
		if (!((BYTE *) p)[3])
			return (p + 3 - (long long) s);
		if (!((BYTE *) p)[4])
			return (p + 4 - (long long) s);
		if (!((BYTE *) p)[5])
			return (p + 5 - (long long) s);
		if (!((BYTE *) p)[6])
			return (p + 6 - (long long) s);
		if (!((BYTE *) p)[7])
			return (p + 7 - (long long) s);
		p += 8;
	}
}
