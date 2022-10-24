/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:06:34 by tkong             #+#    #+#             */
/*   Updated: 2022/07/18 18:03:32 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef char t_i8;
typedef short t_i16;
typedef int t_i32;
typedef long long t_i64;
typedef unsigned char t_u8;
typedef unsigned short t_u16;
typedef unsigned int t_u32;
typedef unsigned long long t_u64;

typedef struct s_list
{
  void          *content;
  struct s_list *next;
} t_list;

void	ft_putchar_fd(t_i8 c, t_i32 fd);
void	ft_putendl_fd(t_i8 *s, t_i32 fd);
void	ft_putstr_fd(t_i8 *s, t_i32 fd);
void	ft_putnbr_fd(t_i32 n, t_i32 fd);
t_i32	ft_isalnum(t_i32 c);
t_i32	ft_isalpha(t_i32 c);
t_i32	ft_isascii(t_i32 c);
t_i32	ft_isdigit(t_i32 c);
t_i32	ft_isprint(t_i32 c);
t_i32	ft_isspace(t_i32 c);
t_i32	ft_islower(t_i32 c);
t_i32	ft_isupper(t_i32 c);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstnew(void *content);
t_i32	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	*ft_memchr(const void *s, t_i32 c, size_t n);
void	*ft_memset(void *s, t_i32 c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
t_i32	ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const t_i8 *s);
t_i8	*ft_strchr(const t_i8 *s, t_i32 c);
t_i8	*ft_strrchr(const t_i8 *s, t_i32 c);
t_i8	*ft_strnstr(const t_i8 *big, const t_i8 *little, size_t len);
t_i32	ft_strncmp(const t_i8 *s1, const t_i8 *s2, size_t n);
size_t	ft_strlcpy(t_i8 *dst, const t_i8 *src, size_t size);
size_t	ft_strlcat(t_i8 *dst, const t_i8 *src, size_t size);
void	ft_striteri(t_i8 *s, void (*f)(t_u32, t_i8 *));
t_i8	*ft_strmapi(t_i8 const *s, t_i8 (*f)(t_u32, t_i8));
t_i8	*ft_strdup(const t_i8 *s1);
t_i8	*ft_strjoin(t_i8 const *s1, t_i8 const *s2);
t_i8	*ft_substr(t_i8 const *s, t_u32 start, size_t len);
t_i8	*ft_strtrim(t_i8 const *s1, t_i8 const *set);
t_i8	**ft_split(t_i8 const *s, t_i8 c);
t_i8	ft_abs(t_i8 n);
t_i16	ft_abs(t_i16 n);
t_i32	ft_abs(t_i32 n);
t_i64	ft_abs(t_i64 n);
void  ft_rev(t_i8 *str, t_i32 begin, t_i32 end);
void  ft_rev(t_i16 *str, t_i32 begin, t_i32 end);
void  ft_rev(t_i32 *str, t_i32 begin, t_i32 end);
void  ft_rev(t_i64 *str, t_i32 begin, t_i32 end);
void  ft_rev(t_u8 *str, t_i32 begin, t_i32 end);
void  ft_rev(t_u16 *str, t_i32 begin, t_i32 end);
void  ft_rev(t_u32 *str, t_i32 begin, t_i32 end);
void  ft_rev(t_u64 *str, t_i32 begin, t_i32 end);
void	ft_swap(t_i8 *a, t_i8 *b);
void	ft_swap(t_i16 *a, t_i16 *b);
void	ft_swap(t_i32 *a, t_i32 *b);
void	ft_swap(t_i64 *a, t_i64 *b);
void	ft_swap(t_u8 *a, t_u8 *b);
void	ft_swap(t_u16 *a, t_u16 *b);
void	ft_swap(t_u32 *a, t_u32 *b);
void	ft_swap(t_u64 *a, t_u64 *b);
t_i8 ft_max(t_i8 a, t_i8 b);
t_i16 ft_max(t_i16 a, t_i16 b);
t_i32 ft_max(t_i32 a, t_i32 b);
t_i64 ft_max(t_i64 a, t_i64 b);
t_u8 ft_max(t_u8 a, t_u8 b);
t_u16 ft_max(t_u16 a, t_u16 b);
t_u32 ft_max(t_u32 a, t_u32 b);
t_u64 ft_max(t_u64 a, t_u64 b);
t_i8 ft_min(t_i8 a, t_i8 b);
t_i16 ft_min(t_i16 a, t_i16 b);
t_i32 ft_min(t_i32 a, t_i32 b);
t_i64 ft_min(t_i64 a, t_i64 b);
t_u8 ft_min(t_u8 a, t_u8 b);
t_u16 ft_min(t_u16 a, t_u16 b);
t_u32 ft_min(t_u32 a, t_u32 b);
t_u64 ft_min(t_u64 a, t_u64 b);
t_i32	ft_tolower(t_i32 c);
t_i32	ft_toupper(t_i32 c);
t_i32 ft_stoi(const t_i8 *str);
t_i32	ft_atoi(const t_i8 *str);
t_i8	*ft_itoa(t_i32 n);

#endif
