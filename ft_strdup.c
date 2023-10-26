/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:29:52 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/26 15:57:40 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*new;

	i = 0;
	new = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	while (*src)
	{
		new[i++] = *src++;
	}
	new[i] = '\0';
	return (new);
}
// u