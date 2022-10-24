#include "libft.h"

t_i64 ft_fact(t_i64 n)
{
  if (!n)
    return (1);
  else
    return (n * ft_factorial(n - 1));
}

t_i64 ft_pow(t_i64 n, t_i32 indices)
{
  if (!indices)
    return (1);
  else
    return (n * ft_power(n, indices - 1));
}

t_i64 ft_fibo(t_i32 idx)
{
  if (idx == 0)
    return (0);
  else if (idx == 1)
    return (1);
  else
    return (ft_fibonacci(idx - 2) + ft_fibonacci(idx - 1));
}

t_u64 ft_sqrt(t_u64 n)
{
  t_u64 l;
  t_u64 r;

  l = 0;
  r = ~(t_u64) 0;
  /* ... */
}

t_i32 ft_isprime(t_u64 n)
{
  t_u64 sqrt;

  sqrt = ft_sqrt(n);
  while (sqrt >= 2)
    if (n % sqrt-- == 0)
      return (0);
  return (1);
}
