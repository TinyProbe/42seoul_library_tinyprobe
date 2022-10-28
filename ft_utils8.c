#include "libft.h"

t_i64 ft_fact(t_i64 n)
{
  if (!n)
    return (1);
  else
    return (n * ft_fact(n - 1));
}

t_f64 ft_pow(t_f64 n, t_i64 indices)
{
  if (!indices)
    return (1);
  else
    return (n * ft_pow(n, indices - 1));
}

t_i64 ft_fibo(t_i64 idx)
{
  t_i64 arr[2];
  t_i64 seq;

  arr[0] = 0;
  arr[1] = 1;
  seq = 1;
  if (idx < 2)
    return (arr[idx]);
  while (++seq <= idx)
    arr[seq & 1] = arr[0] + arr[1];
  return (arr[!(seq & 1)]);
}

t_f64 ft_sqrt(t_f64 n)
{
  t_f64 l;
  t_f64 r;
  t_f64 med;

  l = 0;
  r = ~(1 << 31);
  while (1)
  {
    med = (l + r) / 2;
    if (med * med < n)
      l = med;
    else if (med * med > n)
      r = med;
    else
      return (med) ;
  }
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
