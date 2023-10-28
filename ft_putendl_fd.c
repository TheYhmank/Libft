/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:07:13 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/28 18:02:11 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    size_t i;

    i = 0;
    if (!s)
        return ;
    while (s[i])
        write(fd, &s[i++], 1);
    write(fd, "\n", 1);        
}
