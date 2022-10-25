#include "libft.h"

t_i32 ft_rissorted_i8(t_i8 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
    if (arr[begin - 1] < arr[begin])
      return (0);
  return (1);
}

t_i32 ft_rissorted_i16(t_i16 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
    if (arr[begin - 1] < arr[begin])
      return (0);
  return (1);
}

t_i32 ft_rissorted_i32(t_i32 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
    if (arr[begin - 1] < arr[begin])
      return (0);
  return (1);
}

t_i32 ft_rissorted_64(t_i64 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
    if (arr[begin - 1] < arr[begin])
      return (0);
  return (1);
}
