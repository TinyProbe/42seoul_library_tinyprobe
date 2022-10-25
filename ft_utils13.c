#include "libft.h"

t_i64 ft_fact(t_i64 n)
{
  if (!n)
    return (1);
  else
    return (n * ft_fact(n - 1));
}

t_i64 ft_pow(t_i64 n, t_i32 indices)
{
  if (!indices)
    return (1);
  else
    return (n * ft_pow(n, indices - 1));
}

t_i64 ft_fibo(t_i32 idx)
{
  if (idx == 0)
    return (0);
  else if (idx == 1)
    return (1);
  else
    return (ft_fibo(idx - 2) + ft_fibo(idx - 1));
}

t_i64 ft_sqrt(t_i64 n)
{
  t_i64 l;
  t_i64 r;
  t_i64 med;

  l = 0;
  r = ~(1 << 31);
  while (ft_abs_i64(l - r) != 1)
  {
    med = (l + r) / 2;
    if (med * med < n)
      l = med;
    else if (med * med > n)
      r = med;
    else
      return (med) ;
  }
  return (l);
}

t_i32 ft_isprime(t_i64 n)
{
  t_i64 sqrt;

  if (n == 0 || n == 1)
    return (0);
  sqrt = ft_sqrt(n);
  while (sqrt >= 2)
    if (n % sqrt-- == 0)
      return (0);
  return (1);
}
