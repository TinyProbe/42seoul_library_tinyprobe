#include "libft.h"

void  ft_rev(t_u8 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap(str + begin++, str + end);
}

void  ft_rev(t_u16 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap(str + begin++, str + end);
}

void  ft_rev(t_u32 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap(str + begin++, str + end);
}

void  ft_rev(t_u64 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap(str + begin++, str + end);
}
