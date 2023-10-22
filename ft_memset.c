/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:53:51 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/22 19:03:58 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t			i; //is an unsigned integer type large enough to represent the size of the largest object that the system can handle.
			 // The casting is done within the function by assigning the void* 
	i = 0;    // to a unsigned char* to allow direct modification of the memory in bytes.
	while (i < n)
	{
		((unsigned char *)s)[i++] = (unsigned char)c;
	}
	return (s);
}
