/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:57:29 by tkong             #+#    #+#             */
/*   Updated: 2023/08/05 18:34:29 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_i32	ft_tolower(t_i32 c)
{
	if (c < 0 || c > 255)
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

t_i32	ft_toupper(t_i32 c)
{
	if (c < 0 || c > 255)
		return (0);
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

t_i32	ft_stoi(const t_i8 *str)
{
	t_i32	sign;
	t_i64	res;

	sign = 1;
	if (*str == '-' || *str == '+')
		sign = -(*str++ - ',');
	res = 0;
	while (ft_isdigit(*str))
		res = (res << 1) + (res << 3) + (*str++ ^ 48);
	return (res * sign);
}

t_f32	ft_stof(const t_i8 *str)
{
	t_i32	sign;
	t_i8	**strs;
	t_f32	res;

	sign = 1;
	if (*str == '-' || *str == '+')
		sign = -(*str++ - ',');
	strs = ft_split(str, '.');
	res = ft_stoi(strs[0]);
	if (strs[1])
		res += (ft_stoi(strs[1]) / ft_pow(10, ft_strlen(strs[1])));
	ft_delete_split(strs);
	return (res * sign);
}

t_i8	*ft_itoa(t_i32 n)
{
	t_i8	buf[128];
	t_i32	i;
	t_i32	sign;

	buf[127] = '\0';
	i = 127;
	sign = 1;
	if (n == 0)
		return ((t_i8 *)ft_memcpy(malloc(2), "0", 2));
	if (n < 0)
		sign = -1;
	while (n)
	{
		buf[--i] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		buf[--i] = '-';
	return ((t_i8 *)ft_memcpy(malloc(128 - i), buf, 128 - i));
}
