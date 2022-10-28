#include "libft.h"

void  ft_rev_u8(t_u8 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap_u8(str + begin++, str + end);
}

void  ft_rev_u16(t_u16 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap_u16(str + begin++, str + end);
}

void  ft_rev_u32(t_u32 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap_u32(str + begin++, str + end);
}

void  ft_rev_u64(t_u64 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap_u64(str + begin++, str + end);
}

void  ft_rev_f64(t_f64 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap_f64(str + begin++, str + end);
}
