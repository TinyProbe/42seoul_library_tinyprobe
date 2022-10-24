#include "libft.h"

void	*ft_memchr(const void *s, t_i32 c, size_t n)
{
	t_u8  *str;
  t_i32 i;

	str = (t_u8 *) s;
  i = -1;
	while (++i < n)
		if (p[i] == c)
			return ((void *) p);
	return ((void *) 0);
}

void	*ft_memset(void *s, t_i32 c, size_t n)
{
	t_u64 p;
  t_u64 one;

	p = (t_u64) s;
  one = (t_u8) c;
  one |= (one << 8);
  one |= (one << 16);
  one |= (one << 32);
	while (n >= sizeof(t_u64))
	{
    *(t_u64 *) p = one;
    p += sizeof(t_u64);
    n -= sizeof(t_u64);
	}
	while (n--)
		*(t_u8 *) p++ = c;
	return (s);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
  t_u64 p1;
  t_u64 p2;

  p1 = (t_u64) dst;
  p2 = (t_u64) src;
	while (n >= sizeof(t_u64))
	{
		*(t_u64 *) p1 = *(t_u64 *) p2;
		p1 += sizeof(t_u64);
		p2 += sizeof(t_u64);
		n -= sizeof(t_u64);
	}
	while (n--)
		*(t_u8 *) p1++ = *(t_u8 *) p2++;
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
  t_u64 p1;
  t_u64 p2;

	if (dst < src)
	{
    p1 = (t_u64) dst;
    p2 = (t_u64) src;
    while (n--)
      *(t_u8 *) p1++ = *(t_u8 *) p2++;
	}
	else if (dst > src)
  {
    p1 = (t_u64) dst + n;
    p2 = (t_u64) src + n;
    while (n--)
      *(t_u8 *) --p1 = *(t_u8 *) --p2;
  }
	return (dst);
}

t_i32	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_u64	p1;
	t_u64	p2;

	p1 = (t_u64) s1;
	p2 = (t_u64) s2;
	while (n >= sizeof(t_u64))
	{
		if (*(t_u64 *) p1 ^ *(t_u64 *) p2)
			break ;
		p1 += sizeof(t_u64);
		p2 += sizeof(t_u64);
		n -= sizeof(t_u64);
	}
	while (n--)
		if (*(t_u8 *) p1++ ^ *(t_u8 *) p2++)
			break ;
	if (~n)
		return ((t_i32)(*(t_u8 *)--p1) - (t_i32)(*(t_u8 *)--p2));
	return (0);
}
