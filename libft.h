/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:40:46 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/23 15:36:46 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <strings.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // udali aaaaaaa

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int a);
int ft_isdigit(int a);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
int	ft_strcmp(const char *a, const char *b);
char	*ft_strdup(const char *src);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int str);
int	ft_toupper(int str);


// save this info
// vi .gitignore this commit to say your git which files you do not what to push
// ls -a see hidden files
// git add -A is better then git add *
// git add . to add modified files
// git push && git push github add in both ways
//

#endif 