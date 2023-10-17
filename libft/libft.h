/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 07:39:09 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/10/17 21:44:23 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

/*Characters*/
bool		ft_isalpha(int c);
bool		ft_isdigit(int c);
bool		ft_isalnum(int c);
bool		ft_isascii(int c);
bool		ft_isprint(int c);

/*Strings*/
size_t		ft_strlen(const char *s);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *str1, const char *str2, size_t count);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
int			ft_strlcat(char *dst, const char *src, int dstsize);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_substr(char const *s, unsigned int start, size_t len);


/*Writing*/
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

/*Memory*/
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		*ft_memcpy(void *dst, const void *src, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);

#endif