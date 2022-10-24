#include "libft.h"

t_i32  ft_gcd(t_i32 a, t_i32 b)
{
  if (a < b)
    ft_swap(a, b);
  while (b)
  {
    a %= b;
    ft_swap(a, b);
  }
  return (a);
}

t_i64  ft_gcd(t_i64 a, t_i64 b)
{
  if (a < b)
    ft_swap(a, b);
  while (b)
  {
    a %= b;
    ft_swap(a, b);
  }
  return (a);
}

t_i32  ft_lcm(t_i32 a, t_i32 b)
{
  return (a * b / ft_gcd(a, b));
}

t_i64  ft_lcm(t_i64 a, t_i64 b)
{
  return (a * b / ft_gcd(a, b));
}
