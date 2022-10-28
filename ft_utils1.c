#include "libft.h"

t_f64	ft_abs(t_f64 n)
{
	if (n < 0)
		return (-n);
	return (n);
}

t_f64 ft_max(t_f64 a, t_f64 b)
{
  if (a > b)
    return (a);
  return (b);
}

t_f64 ft_min(t_f64 a, t_f64 b)
{
  if (a < b)
    return (a);
  return (b);
}

t_i64  ft_gcd(t_i64 a, t_i64 b)
{
  if (a < b)
    ft_swap_i64(&a, &b);
  while (b)
  {
    a %= b;
    ft_swap_i64(&a, &b);
  }
  return (a);
}

t_i64  ft_lcm(t_i64 a, t_i64 b)
{
  return (a * b / ft_gcd(a, b));
}
