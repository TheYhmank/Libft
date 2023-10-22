/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:44:08 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/22 19:01:42 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
   unsigned char *temp1;
   unsigned char *temp2;
   
   temp1 = dest;
   temp2 = (unsigned char *)src;
   if(dest < src)
      return (ft_memcpy(dest, src, n));
   if (dest > src)
      while (n--)
      {
         temp1[n] = temp2[n];
      }
   return (dest);    
}
