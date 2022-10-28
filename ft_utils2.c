/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:57:25 by tkong             #+#    #+#             */
/*   Updated: 2022/10/28 10:12:12 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_i8(t_i8 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap_i8(str + begin++, str + end);
}

void	ft_rev_i16(t_i16 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap_i16(str + begin++, str + end);
}

void	ft_rev_i32(t_i32 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap_i32(str + begin++, str + end);
}

void	ft_rev_i64(t_i64 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap_i64(str + begin++, str + end);
}

void	ft_rev_f32(t_f32 *str, t_i32 begin, t_i32 end)
{
	while (begin < --end)
		ft_swap_f32(str + begin++, str + end);
}
