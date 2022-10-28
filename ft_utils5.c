/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:57:31 by tkong             #+#    #+#             */
/*   Updated: 2022/10/28 10:13:10 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_u8(t_u8 *a, t_u8 *b)
{
	const t_u8	a_ = *a;
	const t_u8	b_ = *b;

	*a = b_;
	*b = a_;
}

void	ft_swap_u16(t_u16 *a, t_u16 *b)
{
	const t_u16	a_ = *a;
	const t_u16	b_ = *b;

	*a = b_;
	*b = a_;
}

void	ft_swap_u32(t_u32 *a, t_u32 *b)
{
	const t_u32	a_ = *a;
	const t_u32	b_ = *b;

	*a = b_;
	*b = a_;
}

void	ft_swap_u64(t_u64 *a, t_u64 *b)
{
	const t_u64	a_ = *a;
	const t_u64	b_ = *b;

	*a = b_;
	*b = a_;
}

void	ft_swap_f64(t_f64 *a, t_f64 *b)
{
	const t_f64	a_ = *a;
	const t_f64	b_ = *b;

	*a = b_;
	*b = a_;
}
