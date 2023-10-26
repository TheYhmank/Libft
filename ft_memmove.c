/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:44:08 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/26 15:17:08 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char *altsrc;
	unsigned char *altdest;
	size_t i;
	
	altdest = (unsigned char *)dest;
	altsrc = (const unsigned char *)src;
	if (altdest == NULL || altsrc == NULL)
		return (NULL);
	if(altdest < altsrc)
	{
		i = n;
		while (i > 0)
		{
			altdest[i] = altsrc[i];
			i--;
		}
	}
	else
		ft_memcpy(altdest, altsrc, n);
	return (dest);
}
