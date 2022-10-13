#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	n;

	len = ft_strlen(src);
	if (!size)
		return (len);
	n = len;
	if (n > size - 1)
		n = size - 1;
	ft_memcpy(dst, src, n);
	dst[n] = '\0';
	return (len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*dst;
	size_t		n;

	n = ft_strlen(s);
	dst = (char *) malloc(n + 1);
	if (!dst)
		return (dst);
	while (n--)
		dst[n] = f(n, s[n]);
	return (dst);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	tmp;

	tmp = ft_strlen(s1) + 1;
	if (n > tmp)
		n = tmp;
	tmp = ft_strlen(s2) + 1;
	if (n > tmp)
		n = tmp;
	return (ft_memcmp(s1, s2, n));
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	length[2];
	int		i[2];

	length[0] = ft_strlen(big);
	length[1] = ft_strlen(little);
	if (length[0] > len)
		length[0] = len;
	i[0] = -1;
	while ((size_t)++i[0] + length[1] <= length[0])
	{
		i[1] = -1;
		while ((size_t)++i[1] < length[1])
			if (big[i[0] + i[1]] != little[i[1]])
				break ;
		if ((size_t) i[1] == length[1])
			return ((char *) big + i[0]);
	}
	return ((char *) 0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (start >= len_s)
		return ((char *) ft_calloc(1, 1));
	if (len > len_s - start)
		len = len_s - start;
	dst = (char *) malloc(len + 1);
	if (!dst)
		return (dst);
	ft_memcpy(dst, s + start, len);
	dst[len] = '\0';
	return (dst);
}
