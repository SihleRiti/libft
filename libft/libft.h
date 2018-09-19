/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:25:56 by sriti             #+#    #+#             */
/*   Updated: 2018/06/18 12:23:19 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

int			ft_isalpha(int c);
void		*ft_memset(void *b, int c, size_t len);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char const *s, int fd);
char		**ft_strsplit(char const *s, char c);
void		ft_putendl(char const *s);
void		ft_putstr(char const *s);
char		*ft_strtrim(char *s);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strncat(char *dst, const char *src, size_t len);
char		*ft_strcat(char *dst, const char *src);
char		*ft_itoa(int n);
char		*ft_strjoin(char const *s1, char const *s2);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *s);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strrchr(const char *s, int c);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strsub(char const *s, unsigned int start, size_t len);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);
char		*ft_strdup(const char *s1);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
void		ft_putstr_fd(char const *s, int fd);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strchr(char *s, int c);
void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_strmap(char const *s, char (*f)(char));
void		*ft_memmove(void *dst, const void *src, size_t len);

#endif
