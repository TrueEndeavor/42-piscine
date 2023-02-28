/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:46:01 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/27 14:53:48 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int		result;

	if (index < 0)
		result = -1;
	if (index == 0)
		result = 0;
	if (index == 1)
		result = 1;
	if (index > 1)
		result = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_fibonacci(7));
}
*/