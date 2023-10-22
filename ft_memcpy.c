/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:42:16 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/22 15:51:56 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *altdest;
    unsigned char *altsrc;

    altdest = (unsigned char *)dest;
    altsrc = (unsigned char *)src;
    while (n > 0)
    {
        *altdest = *altsrc;
        altdest++;
        altsrc++;
        n--;
    }
    return (dest);
}
