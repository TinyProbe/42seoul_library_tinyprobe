#include "libft.h"

t_i32	ft_isspace(t_i32 c)
{
	return ((ch >= 9 && ch <= 13) || ch == 32);
}

t_i32	ft_islower(t_i32 c)
{
	return ((c >= 'a' && c <= 'z'));
}

t_i32	ft_isupper(t_i32 c)
{
	return ((c >= 'A' && c <= 'Z'));
}

t_i32	ft_isnegat(t_i32 c)
{
	return (c < 0);
}

t_i32	ft_isposit(t_i32 c)
{
	return (c > 0);
}
