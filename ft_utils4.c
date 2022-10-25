#include "libft.h"

void	ft_swap_i8(t_i8 *a, t_i8 *b)
{
  const t_i8  a_ = *a;
  const t_i8  b_ = *b;

  *a = b_;
  *b = a_;
}

void	ft_swap_i16(t_i16 *a, t_i16 *b)
{
  const t_i16 a_ = *a;
  const t_i16 b_ = *b;

  *a = b_;
  *b = a_;
}

void	ft_swap_i32(t_i32 *a, t_i32 *b)
{
  const t_i32 a_ = *a;
  const t_i32 b_ = *b;

  *a = b_;
  *b = a_;
}

void	ft_swap_i64(t_i64 *a, t_i64 *b)
{
  const t_i64 a_ = *a;
  const t_i64 b_ = *b;

  *a = b_;
  *b = a_;
}
