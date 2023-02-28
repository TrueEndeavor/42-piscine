/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:11:52 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/28 08:46:55 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb < 2)
		return (0);
	while ((i <= (nb / i)) && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_find_next_prime(-1));
}
*/
