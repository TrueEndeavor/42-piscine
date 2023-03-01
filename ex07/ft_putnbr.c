/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:40:36 by lannur-s          #+#    #+#             */
/*   Updated: 2023/03/01 13:24:17 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_recur(long num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
		ft_putnbr_recur(num / 10);
	ft_putchar(num % 10 + '0');
}

void	ft_putnbr(int nb)
{
	long	num;

	if (nb > 2147483647)
		return ;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	num = nb;
	ft_putnbr_recur(num);
}
