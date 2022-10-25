#include "../libft.h"
#include "ft_printf.h"

void	itodec(t_elem *info, t_i32 i)
{
	info->neg = ((t_u32) i & (1u << 31) || 0);
	if (!i)
	{
		if (!(info->prec) || info->precis)
			info->res[info->end++] = '0';
		return ;
	}
	while (i)
	{
		info->res[info->end++] = ft_abs_i32(i % 10) + '0';
		i /= 10;
	}
	ft_rev_i8(info->res, info->begin, info->end);
}

void	utodec(t_elem *info, t_u32 u)
{
	if (!u)
	{
		if (!(info->prec) || info->precis)
			info->res[info->end++] = '0';
		return ;
	}
	while (u)
	{
		info->res[info->end++] = u % 10 + '0';
		u /= 10;
	}
	ft_rev_i8(info->res, info->begin, info->end);
}

void	ulltohex(t_elem *info, t_u64 ull, t_i32 up)
{
	const t_i8	*hexchr;

	hexchr = "0123456789abcdef";
	if (up)
		hexchr = "0123456789ABCDEF";
	if (!ull)
	{
		info->flag -= (info->flag & FLAG_SHARP);
		if (!(info->prec) || info->precis)
			info->res[info->end++] = '0';
		return ;
	}
	while (ull)
	{
		info->res[info->end++] = hexchr[ull % 16];
		ull /= 16;
	}
	ft_rev_i8(info->res, info->begin, info->end);
}

void	ptohex(t_elem *info, void *p)
{
	const t_i8 *const	hexchr = "0123456789abcdef";
	t_u64				ull;

	ull = (t_u64) p;
	if (!ull)
	{
		info->res[info->end++] = '0';
		return ;
	}
	while (ull)
	{
		info->res[info->end++] = hexchr[ull % 16];
		ull /= 16;
	}
	ft_rev_i8(info->res, info->begin, info->end);
}
