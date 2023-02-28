/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:28:22 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/27 14:49:04 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	// Pending: Overflows must not be handled, 
	//the function return will be undefined.	
	printf("%d",ft_iterative_factorial(12));
}
*/
