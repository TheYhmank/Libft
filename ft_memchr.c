/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:20:00 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/22 15:36:01 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const unsigned char *str;
    
    str = (const unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == (unsigned char )c)
            return ((char *)&str[i]);
        i++;
    }
    return (NULL);
}

int main(void)
{
    char s[] = "jcxlkvjlk lsdkjf l";
    char *res = ft_memchr(s, 'x', 6);
    printf("%s", res);
    return (0);
    
}