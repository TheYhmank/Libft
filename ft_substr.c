/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:35:09 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/27 18:16:19 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t len_s;
    char *new;

    if (s == NULL)
        return (NULL);
    len_s = ft_strlen(s);
    if (start >= len_s)
        return (NULL);
    new = (char *)malloc(len + 1);
    if (new == NULL)
        return (NULL);
    i = 0;
    while (i < len && s[len + i])
    {
        new[i] = s[len + i];
        i++;
    }
    new[i] = '\0';
    return (new);
}

int main(void)
{
    char str[] = "askdljf";
    char *res = ft_substr(str, 2, 2);
    printf("%s\n", res);
    return (0);
}