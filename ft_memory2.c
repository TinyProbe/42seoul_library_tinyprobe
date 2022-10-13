#include "libft.h"

#define BYTE	unsigned char
#define UNT_T	unsigned long long
#define UNTSIZE	8

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	long long	p1;
	long long	p2;

	p1 = (long long) s1;
	p2 = (long long) s2;
	while (n >= UNTSIZE)
	{
		if (*(UNT_T *) p1 ^ *(UNT_T *) p2)
			break ;
		p1 += UNTSIZE;
		p2 += UNTSIZE;
		n -= UNTSIZE;
	}
	while (n--)
		if (*(BYTE *) p1++ ^ *(BYTE *) p2++)
			break ;
	if (~n)
		return ((int)(*(BYTE *)--p1) - (int)(*(BYTE *)--p2));
	return (0);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
  long long p1;
  long long p2;

  p1 = (long long) dst;
  p2 = (long long) srd;
	while (n >= UNTSIZE)
	{
		*(UNT_T *) p1 = *(UNT_T *) p2;
		p1 += UNTSIZE;
		p2 += UNTSIZE;
		n -= UNTSIZE;
	}
	while (n--)
		*(BYTE *) p1++ = *(BYTE *) p2++;
	return (dst);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count > 16711568 || size > 16711568
      || (long long) count * size > 16711568)
		return ((void *) 0);
	ptr = malloc(count * size);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
