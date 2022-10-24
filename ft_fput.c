#include "libft.h"

void	ft_putchar_fd(t_i8 c, t_i32 fd)
{
	write(fd, &c, 1);
}

void	ft_putendl_fd(t_i8 *s, t_i32 fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

void	ft_putstr_fd(t_i8 *s, t_i32 fd)
{
	write(fd, s, ft_strlen(s));
}

void	ft_putnbr_fd(t_i32 n, t_i32 fd)
{
  t_i8  *num;

  num = ft_itoa(n);
  if (!num)
    return ;
  ft_putstr_fd(num, fd);
  free(num);
}
