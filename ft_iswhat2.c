#include "libft.h"

t_i32	ft_isspace(t_i32 c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

t_i32	ft_islower(t_i32 c)
{
	return ((c >= 'a' && c <= 'z'));
}

t_i32	ft_isupper(t_i32 c)
{
	return ((c >= 'A' && c <= 'Z'));
}
