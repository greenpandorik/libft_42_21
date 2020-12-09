/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 22:29:38 by maragog           #+#    #+#             */
/*   Updated: 2020/05/26 01:07:06 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int						ft_atoi(const char *str);
int						ft_isalpha(int syb);
int						ft_isalnum(int syb);
int						ft_isdigit(int syb);
void					ft_bzero(void *s, size_t n);
int						ft_isprint(int syb);
void					*ft_memmove(void *dest, const void *src, size_t n);
char					*ft_strchr(const char *str, int syb);
size_t					ft_strlcat(char *dest, const char *src, size_t size);
size_t					ft_strlen(const char *str);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_toupper(int syb);
int						ft_isascii(int syb);
void					*ft_memccpy(void *dst, const void *src,\
int c, size_t n);
void					*ft_memchr(void *str, int syb, size_t n);
int						ft_memcmp(const void *str1, const void *str2,\
size_t len);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memset(void *a, int b, size_t c);
size_t					ft_strlcpy(char *dest, char const *src, size_t size);
char					*ft_strnstr(const char *s1, const char *s2, size_t n);
int						ft_tolower(int c);
char					*ft_strrchr(const char *s, int c);
void					*ft_calloc(size_t count, size_t size);
char					*ft_strdup(const char *src);
void					ft_putnbr_fd(int n, int fd);
void					ft_putchar_fd(char c, int fd);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_substr(char const *s, unsigned int start,\
size_t len);
char					*ft_strtrim(char const *s);
char					**ft_split(char	const *s, char c);
char					*ft_itoa(int nbr);
char					*ft_strmapi(char const *s, char (*f)\
(unsigned int, char));
void					ft_putendl_fd(char *s, int fd);
void					ft_putstr_fd(char const *s, int fd);
#endif
