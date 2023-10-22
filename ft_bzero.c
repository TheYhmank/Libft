/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:44:03 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/22 18:48:35 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
  	ft_memset(s, '0', n);
}

int main( void )
{
  char a[] = "ksdhfksdjhf";
  ft_bzero(a, 1);
  printf("%s", a);
  return (0);
}