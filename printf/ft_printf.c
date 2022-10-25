#include "../libft.h"
#include "ft_printf.h"

t_i32	ft_printf(const t_i8 *format, ...)
{
	va_list	ap;
	t_i32		rtn;

	va_start(ap, format);
	rtn = ft_vfprintf(format, ap);
	va_end(ap);
	return (rtn);
}
