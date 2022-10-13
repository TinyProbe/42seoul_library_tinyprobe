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

#define I8  char
#define I16 short
#define I32 int
#define I64 long long
#define U8  unsigned char
#define U16 unsigned short
#define U32 unsigned int
#define U64 unsigned long long

typedef struct s_list
{
	void          *content;
	struct s_list *next;
} t_list;

void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
I32	    ft_lstsize(t_list *lst);
I32	    ft_atoi(const I8 *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
I32	    ft_isalnum(I32 c);
I32	    ft_isalpha(I32 c);
I32	    ft_isascii(I32 c);
I32	    ft_isdigit(I32 c);
I32	    ft_isprI32(I32 c);
I8    *ft_itoa(I32 n);
void    *ft_memchr(const void *s, I32 c, size_t n);
I32	    ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t n);
void    *ft_memset(void *b, I32 c, size_t len);
void    ft_putI8_fd(I8 c, I32 fd);
void    ft_putendl_fd(I8 *s, I32 fd);
void    ft_putstr_fd(I8 *s, I32 fd);
void    ft_putnbr_fd(I32 n, I32 fd);
I8    **ft_split(I8 const *s, I8 c);
I8    *ft_strchr(const I8 *s, I32 c);
I8    *ft_strdup(const I8 *s1);
void    ft_striteri(I8 *s, void (*f)(U32, I8 *));
I8    *ft_strjoin(I8 const *s1, I8 const *s2);
size_t	ft_strlcat(I8 *dst, const I8 *src, size_t size);
size_t	ft_strlcpy(I8 *dst, const I8 *src, size_t size);
size_t	ft_strlen(const I8 *s);
I8    *ft_strmapi(I8 const *s, I8 (*f)(U32, I8));
I32	    ft_strncmp(const I8 *s1, const I8 *s2, size_t n);
I8    *ft_strnstr(const I8 *big, const I8 *little, size_t len);
I8    *ft_strrchr(const I8 *s, I32 c);
I8    *ft_strtrim(I8 const *s1, I8 const *set);
I8    *ft_substr(I8 const *s, U32 start, size_t len);
I32	    ft_tolower(I32 c);
I32	    ft_toupper(I32 c);
I32     ft_abs(I32 n);
void    ft_rev(I8 *str, I32 begin, I32 end);
void    ft_rev(I32 *arr, I32 begin, I32 end);
void    ft_swap(I8 *a, I8 *b);
void    ft_swap(I32 *a, I32 *b);
I32     ft_stoi(const I8 *str);
I32     ft_max(I32 a, I32 b)
I64     ft_max(I64 a, I64 b)
U32     ft_max(U32 a, U32 b)
U64     ft_max(U64 a, U64 b)
I32     ft_min(I32 a, I32 b)
I64     ft_min(I64 a, I64 b)
U32     ft_min(U32 a, U32 b)
U64     ft_min(U64 a, U64 b)

#endif
