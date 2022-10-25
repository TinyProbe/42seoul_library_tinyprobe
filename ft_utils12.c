#include "libft.h"

t_i32  ft_gcd_i32(t_i32 a, t_i32 b)
{
  if (a < b)
    ft_swap_i32(&a, &b);
  while (b)
  {
    a %= b;
    ft_swap_i32(&a, &b);
  }
  return (a);
}

t_i64  ft_gcd_i64(t_i64 a, t_i64 b)
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

t_i32  ft_lcm_i32(t_i32 a, t_i32 b)
{
  return (a * b / ft_gcd_i32(a, b));
}

t_i64  ft_lcm_i64(t_i64 a, t_i64 b)
{
  return (a * b / ft_gcd_i64(a, b));
}
