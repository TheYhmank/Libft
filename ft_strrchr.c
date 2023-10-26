/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:33:11 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/26 15:53:25 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = strlen(s) - 1;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return ((char *)s);
}
