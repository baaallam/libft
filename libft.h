/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:37:55 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/10/16 20:13:14 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> //test
# include <string.h> //test

void	*skipper(char const *str, char c, int i);
void	*checker(char const *str, int i, char **result, int k);
void	*checker1(char **result, int k);
void	ft_free(char **result, int k);
int     ft_isalnum(char c);
int     ft_isalpha(char c);
int     ft_isascii(int c);
int     ft_isdigit(char c);
int     ft_isprint(int c);
int     ft_strlen(char *str);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_atoi(char *str);
int     ft_memcmp(const void *s1 , const void *s2 , size_t n);
int     ft_strncmp(const char *s1 , const char *s2 , size_t n);

void    *ft_memset(void *s , int c , size_t n);
void    ft_bzero(void *s , size_t n );
void    *ft_memcpy(void *dest , const void *src , size_t n);
void    *ft_memmove(void *dest , const void *src , size_t n);
void    *ft_memchr(const void *s , int c , size_t n);
void    *ft_calloc(size_t n , size_t size );
void    ft_putchar_fd(char c , int fd);
void    ft_putstr_fd(char *str , int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int nb , int fd);

size_t      ft_strlcpy(char *dst , const char *src , size_t size);
size_t      ft_strlcat(char *dst , const char *src , size_t size );

char    *ft_strchr(const char *s , int c);
char    *ft_strrchr(const char *s , int c);
char    *ft_strnstr(const char *s1 , const char *s2 , size_t n);
char    *ft_strdup(char *src);
char    **ft_split(char const *str , char c);
char	*ft_itoa(int nb);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);

#endif