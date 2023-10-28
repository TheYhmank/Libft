/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:38:04 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/28 18:24:12 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    size_t i;
    size_t j;
    
    if (!s1 || !s2)
        return (NULL);
    new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!new)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        new[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        new[i + j] = s2[j];
        j++;
    }
    new[i + j] = '\0';
    return (new);
}

int main(void)
{
    char str1[] = "hello";
    char str2[] = "world";
    char *res = ft_strjoin(str1, str2);
    printf("%s", res);
    return (0); 
}