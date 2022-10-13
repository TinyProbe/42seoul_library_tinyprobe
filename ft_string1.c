#include "libft.h"

#define BYTE	unsigned char
#define UNT_T	unsigned long long
#define UNTSIZE	8

static void	cat(long long *pp1, long long *pp2, size_t *pn);
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	long long	p[2];
	size_t		len[2];
	size_t		n;

	len[0] = ft_strlen(dst);
	len[1] = ft_strlen(src);
	p[0] = (long long) dst + len[0];
	p[1] = (long long) src;
	if (len[0] >= size)
		return (len[1] + size);
	n = size - (len[0] + 1);
	if (n > len[1])
		n = len[1];
	if (n >= UNTSIZE)
		cat(p, p + 1, &n);
	while (n--)
		*(BYTE *) p[0]++ = *(BYTE *) p[1]++;
	*(BYTE *) p[0] = '\0';
	return (len[0] + len[1]);
}
static void	cat(long long *pp1, long long *pp2, size_t *pn)
{
	while (*pn >= UNTSIZE)
	{
		*(UNT_T *) *pp1 = *(UNT_T *) *pp2;
		*pp1 += UNTSIZE;
		*pp2 += UNTSIZE;
		*pn -= UNTSIZE;
	}
}

static void	check(long long *pp, size_t *pn, int c);
char	*ft_strrchr(const char *s, int c)
{
	long long	p;
	size_t		n;

	n = ft_strlen(s) + 1;
	p = (long long) s + n;
  check(&p, &n, c);
	while (n--)
		if (*(BYTE *)--p == (BYTE) c)
			return ((void *) p);
	return ((void *) 0);
}
static void	check(long long *pp, size_t *pn, int c)
{
	UNT_T	rpt_one;
	UNT_T	rpt_c;
	UNT_T	unit;

	rpt_one = 0x0101010101010101;
	rpt_c = c | (c << 8);
	rpt_c |= rpt_c << 16;
	rpt_c |= rpt_c << 32;
	while (*pn >= UNTSIZE)
	{
		*pp -= UNTSIZE;
		*pn -= UNTSIZE;
		unit = *(UNT_T *) *pp ^ rpt_c;
		if (((unit - rpt_one) & ~unit) & (rpt_one << 7))
		{
			*pp += UNTSIZE;
			*pn += UNTSIZE;
			break ;
		}
	}
}
