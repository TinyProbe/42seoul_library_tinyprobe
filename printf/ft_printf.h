#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

# define MAX_SIZE		1000000000

# define FLAG_MINUS		(1 << 0)
# define FLAG_PLUS		(1 << 1)
# define FLAG_SPACE		(1 << 2)
# define FLAG_SHARP		(1 << 3)
# define FLAG_ZERO		(1 << 4)

# define WID_NUM		(1 << 0)
# define WID_STAR		(1 << 1)

# define PREC_DOT		(1 << 0)
# define PREC_NUM		(1 << 1)
# define PREC_STAR	(1 << 2)

# define LEN_H			(1 << 0)
# define LEN_HH			(1 << 1)
# define LEN_L			(1 << 2)
# define LEN_LL			(1 << 3)
# define LEN_J			(1 << 4)
# define LEN_Z			(1 << 5)
# define LEN_T			(1 << 6)
# define LEN_L_UP		(1 << 7)

# define SPEC_D_OR_I	(1 << 0)
# define SPEC_U		    (1 << 1)
# define SPEC_O		    (1 << 2)
# define SPEC_X		    (1 << 3)
# define SPEC_X_UP    (1 << 4)
# define SPEC_F		    (1 << 5)
# define SPEC_F_UP    (1 << 6)
# define SPEC_E		    (1 << 7)
# define SPEC_E_UP    (1 << 8)
# define SPEC_G		    (1 << 9)
# define SPEC_G_UP    (1 << 10)
# define SPEC_A		    (1 << 11)
# define SPEC_A_UP    (1 << 12)
# define SPEC_C		    (1 << 13)
# define SPEC_S		    (1 << 14)
# define SPEC_P		    (1 << 15)
# define SPEC_N		    (1 << 16)
# define SPEC_PERCENT	(1 << 17)

typedef struct s_elem
{
	t_u32		flag;
	t_u32		wid;
	t_u32		prec;
	t_u32		len;
	t_u32		spec;
	t_i32		width;
	t_i32		precis;
	t_i8		res[MAX_SIZE];
	t_i32		begin;
	t_i32		end;
	t_i32		neg;
}	t_elem;

t_i32	ft_vfprintf(const t_i8 *format, va_list ap);
void	set_arg_value(va_list ap, t_elem *info);
t_i32	scan_flag(const t_i8 *form, t_i32 idx, t_elem *info);
t_i32	scan_wid(const t_i8 *form, t_i32 idx, t_elem *info);
t_i32	scan_prec(const t_i8 *form, t_i32 idx, t_elem *info);
t_i32	scan_len(const t_i8 *form, t_i32 idx, t_elem *info);
t_i32	scan_spec(const t_i8 *form, t_i32 idx, t_elem *info);
t_i32	is_flag(t_i32 c);
t_i32	is_wid(t_i32 c);
t_i32	is_prec(t_i32 c);
t_i32	is_len(t_i32 c);
t_i32	is_spec(t_i32 c);
t_i32	is_spec_part1(t_i32 c);
t_i32	is_spec_part2(t_i32 c);
t_i32	check_flag(t_elem *info);
t_i32	check_wid(t_elem *info);
t_i32	check_prec(t_elem *info);
t_i32	check_len(t_elem *info);
t_i32	check_spec(t_elem *info);
t_i32	check_mix_minus(t_elem *info);
t_i32	check_mix_plus(t_elem *info);
t_i32	check_mix_space(t_elem *info);
t_i32	check_mix_sharp(t_elem *info);
t_i32	check_mix_zero(t_elem *info);
void	itodec(t_elem *info, t_i32 i);
void	utodec(t_elem *info, t_u32 u);
void	ulltohex(t_elem *info, t_u64 ull, t_i32 up);
void	ptohex(t_elem *info, void *p);
void	apply_prec(t_elem *info);
void	apply_base(t_elem *info);
void	apply_wid(t_elem *info);
void	apply_sign(t_elem *info);

#endif
