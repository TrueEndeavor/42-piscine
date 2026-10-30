/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:42:26 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/27 14:49:22 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include <stdio.h>
int main()
{
	// Pending: Overflows must not be handled, 
	//the function return will be undefined.
	printf("%d",ft_recursive_factorial(12));
}
*/