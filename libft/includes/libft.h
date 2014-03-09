/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:52:19 by jvincent          #+#    #+#             */
/*   Updated: 2014/02/16 17:48:10 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
# define __LIBFT_H__

# include <string.h>
# include "../printf/includes/libftprintf.h"
# define BUFF_SIZE 256

typedef struct	s_list
{
	struct s_list	*next;
	void			*content;
}				t_list;

typedef struct	s_btree
{
	struct s_btree	*right;
	struct s_btree	*left;
	void			*item;
}				t_btree;

typedef struct		s_word
{
	char			c;
	struct s_word	*next;
}					t_word;

void	*ft_memset(void *ptr, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnrchr(const char *s, int c, int index);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_strswap(char *str, char p, char c);

int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putstr(char *str);
void	ft_putendl(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putsplit(char **str);
int		ft_error(char *msg);

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
void	ft_destroysplit(char **split);
char	*ft_itoa(int n);

t_list	*ft_lstnew(void *content);
void	ft_lstadd(t_list **alst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstcount(t_list *list);
void	ft_putlst(t_list *alst);
char	**ft_lst2tab(t_list *list);

t_btree	*bt_new(void *item);
void	bt_add(t_btree **rt, void *it, int (*cmpf)(const char *, const char *));
void	ft_putbtree(t_btree **node);

int		ft_countchar(char *str, char c);

int		get_next_line(int const fd, char **line);

t_word	*ft_addletter(t_word *word, char c);
void	ft_putword(t_word *word);
int		ft_wordlen(t_word *word);
void	ft_freeword(t_word *word);

#endif /* !__LIBFT_H__ */
