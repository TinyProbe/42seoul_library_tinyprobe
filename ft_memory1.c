#include "libft.h"

#define BYTE	unsigned char
#define UNT_T	unsigned long long
#define UNTSIZE	8

static void	check(long long *pp, size_t *pn, int c);
void	*ft_memchr(const void *s, int c, size_t n)
{
	long long	p;

	p = (long long) s;
  check(&p, &n, c);
	while (n--)
		if (*(BYTE *) p++ == (BYTE) c)
			return ((void *)(p - 1));
	return ((void *) 0);
}
static void	check(long long *pp, size_t *pn, int c)
{
	UNT_T	rpt_one;
	UNT_T	rpt_c;
	UNT_T	unit;

	rpt_one = 0x0101010101010101;
	rpt_c = c | (c << 8);
	rpt_c |= (rpt_c << 16);
	rpt_c |= (rpt_c << 32);
	while (*pn >= UNTSIZE)
	{
		unit = *(UNT_T *) *pp ^ rpt_c;
		if (((unit - rpt_one) & ~unit) & (rpt_one << 7))
			break ;
		*pp += UNTSIZE;
		*pn -= UNTSIZE;
	}
}

static void	set(long long *pp, size_t *pn, int c);
void	*ft_memset(void *s, int c, size_t n)
{
	long long	p;

	p = (long long) s;
	if (n >= UNTSIZE)
	{
		while ((size_t) p % UNTSIZE)
		{
			*(BYTE *) p++ = c;
			n -= 1;
		}
		if (n >= UNTSIZE)
			set(&p, &n, c);
	}
	while (n--)
		*(BYTE *) p++ = c;
	return (s);
}
static void	set(long long *pp, size_t *pn, int c)
{
	UNT_T	unit;

	unit = (unsigned char) c;
	unit |= unit << 8;
	unit |= unit << 16;
	unit |= unit << 32;
	while (*pn >= UNTSIZE)
	{
		*(UNT_T *) *pp = unit;
		*pp += UNTSIZE;
		*pn -= UNTSIZE;
	}
}
