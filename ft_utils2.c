#include "libft.h"

void  ft_rev(t_i8 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap(str + begin++, str + end);
}

void  ft_rev(t_i16 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap(str + begin++, str + end);
}

void  ft_rev(t_i32 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap(str + begin++, str + end);
}

void  ft_rev(t_i64 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap(str + begin++, str + end);
}
