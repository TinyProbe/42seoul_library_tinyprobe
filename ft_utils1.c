#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void  ft_rev(char *str, int begin, int end)
{
	while (begin < --end)
		ft_swap(str + begin++, str + end);
}

void  ft_rev(int *arr, int begin, int end)
{
	while (begin < --end)
		ft_swap(arr + begin++, arr + end);
}

void	ft_swap(char *a, char *b)
{
  const char  a_ = *a;
  const char  b_ = *b;

  *a = b_;
  *b = a_;
}

void	ft_swap(int *a, int *b)
{
  const int a_ = *a;
  const int b_ = *b;

  *a = b_;
  *b = a_;
}
