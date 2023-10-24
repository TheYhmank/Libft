/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:58:06 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/24 23:05:53 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*rtn;

	rtn = malloc(size * nmemb);
	if (!rtn)
		return (NULL);
	ft_bzero(rtn, nmemb);
	return (rtn);
} // cahnge
