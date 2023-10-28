/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:07:16 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/28 17:59:30 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
        if (n == -2147483648)
        {
            ft_putchar_fd("-2147483648", fd);
            return ;
        }
        ft_putchar_fd('-', fd);
        n *= -1;  
    }
    if (n / 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
        ft_putchar_fd('0' + n, fd); 
}

int main(void)
{
    int number = 45;
    ft_putchar_fd(45, 1);
    return (0);    
}