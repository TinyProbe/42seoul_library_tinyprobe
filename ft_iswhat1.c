/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhat1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:56:24 by tkong             #+#    #+#             */
/*   Updated: 2022/10/28 09:57:58 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_i32	ft_isalnum(t_i32 c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

t_i32	ft_isalpha(t_i32 c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

t_i32	ft_isascii(t_i32 c)
{
	return (c >= 0 && c <= 0177);
}

t_i32	ft_isdigit(t_i32 c)
{
	return (c >= '0' && c <= '9');
}

t_i32	ft_isprint(t_i32 c)
{
	return ((c >= 040 && c <= 077) || (c >= 0100 && c <= 0176));
}
