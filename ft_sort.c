#include "libft.h"

void  ft_sort(t_i8 *arr, t_i32 begin, t_i32 end)
{

}

void  ft_sort(t_i16 *arr, t_i32 begin, t_i32 end)
{

}

void  ft_sort(t_i32 *arr, t_i32 begin, t_i32 end)
{

}

void  ft_sort(t_i64 *arr, t_i32 begin, t_i32 end)
{

}

void  ft_sort(t_u8 *arr, t_i32 begin, t_i32 end)
{

}

void  ft_sort(t_u16 *arr, t_i32 begin, t_i32 end)
{

}

void  ft_sort(t_u32 *arr, t_i32 begin, t_i32 end)
{

}

void  ft_sort(t_u64 *arr, t_i32 begin, t_i32 end)
{

}

t_i32 ft_issorted(t_i8 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] > arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted(t_i16 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] > arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted(t_i32 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] > arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted(t_i64 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] > arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted(t_u8 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] > arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted(t_u16 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] > arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted(t_u32 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] > arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted(t_u64 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] > arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted_rev(t_i8 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] < arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted_rev(t_i16 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] < arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted_rev(t_i32 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] < arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted_rev(t_i64 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] < arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted_rev(t_u8 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] < arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted_rev(t_u16 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] < arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted_rev(t_u32 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] < arr[begin])
      return (0);
  }
  return (1);
}

t_i32 ft_issorted_rev(t_u64 *arr, t_i32 begin, t_i32 end)
{
  while (++begin < end)
  {
    if (arr[begin - 1] < arr[begin])
      return (0);
  }
  return (1);
}
