#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>

/* INCLUDE */
#include <string.h>

/* PROTOTYPES */
size_t  strlen(const char *s);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_isascii(int c);
char    *ft_strcpy(char *dst, const char *src);
char    *ft_strncpy(char *dst, const char *src, size_t len);
char    *ft_strcat(char *restrict s1, const char *restrict s2);
char    *ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

#endif