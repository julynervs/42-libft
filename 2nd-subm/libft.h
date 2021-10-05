/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:07:55 by jurobert          #+#    #+#             */
/*   Updated: 2021/10/05 17:54:05 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/***************************************/
/********** PART 1 - LIBC FUNCTIONS ****/
/***************************************/
/**/
/* CHARACTER CLASSIFICATION FUNCTIONS */
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
/**/
/* CHARACTER CONVERSION FUNCTIONS */
int				ft_toupper(int c);
int				ft_tolower(int c);
/**/
/* CHARACTER-NUMERIC CONVERSION FUNCTION */
int				ft_atoi(const char *nptr);
/**/
/* MEMORY FUNCTIONS */
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *b, int c, size_t len);
int				ft_memcmp(const void *b1, const void *b2, size_t len);
void			ft_bzero(void *b, size_t len);
void			*ft_calloc(size_t count, size_t size);
/**/
/* STRING EXAMINATION FUNCTIONS */
size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t len);
char			*ft_strnstr(const char	*big, const char *little, size_t len);
/**/
/* STRING MANIPULATION FUNCTIONS */
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t newsize);
char			*ft_strdup(const char *s);
/**/
/***************************************/
/**** PART 2 - ADDITIONAL FUNCTIONS ****/
/***************************************/
/**/
/* NUMERIC-CHARACTER CONVERSION FUNCTION */
char			*ft_itoa(int n);
/**/
/* STRING MANIPULATION FUNCTIONS */
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_substr(char const *str, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
/**/
/* FILE DESCRIPTOR FUNCTIONS */
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
#endif
