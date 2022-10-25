#include "libft.h"

t_i32 ft_rissorted_u8(t_u8 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
    if (arr[begin - 1] < arr[begin])
      return (0);
  return (1);
}

t_i32 ft_rissorted_u16(t_u16 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
    if (arr[begin - 1] < arr[begin])
      return (0);
  return (1);
}

t_i32 ft_rissorted_u32(t_u32 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
    if (arr[begin - 1] < arr[begin])
      return (0);
  return (1);
}

t_i32 ft_rissorted_u64(t_u64 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
    if (arr[begin - 1] < arr[begin])
      return (0);
  return (1);
}
