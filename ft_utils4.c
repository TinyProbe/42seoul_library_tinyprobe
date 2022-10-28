/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:57:29 by tkong             #+#    #+#             */
/*   Updated: 2022/10/28 10:13:31 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_i8(t_i8 *a, t_i8 *b)
{
	const t_i8	a_ = *a;
	const t_i8	b_ = *b;

	*a = b_;
	*b = a_;
}

void	ft_swap_i16(t_i16 *a, t_i16 *b)
{
	const t_i16	a_ = *a;
	const t_i16	b_ = *b;

	*a = b_;
	*b = a_;
}

void	ft_swap_i32(t_i32 *a, t_i32 *b)
{
	const t_i32	a_ = *a;
	const t_i32	b_ = *b;

	*a = b_;
	*b = a_;
}

void	ft_swap_i64(t_i64 *a, t_i64 *b)
{
	const t_i64	a_ = *a;
	const t_i64	b_ = *b;

	*a = b_;
	*b = a_;
}

void	ft_swap_f32(t_f32 *a, t_f32 *b)
{
	const t_f32	a_ = *a;
	const t_f32	b_ = *b;

	*a = b_;
	*b = a_;
}
