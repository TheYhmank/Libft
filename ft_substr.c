/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:35:09 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/26 18:18:01 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t len_s;

    if(!s)
        return (NULL);
    len_s = ft_strlen(s);
    if (start >= len_s)
        return (ft_strdup("")); // NULL
    if (len_s < start + len)
        len = len_s - start;
    substr = (char *)malloc((len + 1)); // test sizeof
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}

int main(void)
{
    char str[] = "klsdjfs";
    char *res = ft_substr(str, 2, 2);
    printf("%s", res);
    //free(res);
    return (0);
}