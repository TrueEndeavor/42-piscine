/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 08:58:44 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/28 18:48:19 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_numbers(char f_digit, char s_digit, char t_digit)
{
	ft_putchar(f_digit);
	ft_putchar(s_digit);
	ft_putchar(t_digit);
}

void	print_set(char first_digit, char second_digit, char third_digit)
{
	if (first_digit == '7' && second_digit == '8' && third_digit == '9')
	{
		print_numbers(first_digit, second_digit, third_digit);
	}
	else
	{
		print_numbers(first_digit, second_digit, third_digit);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	first_digit;
	int	second_digit;
	int	third_digit;

	first_digit = '0';
	while (first_digit <= '7')
	{
		second_digit = first_digit + 1;
		while (second_digit <= '8')
		{
			third_digit = second_digit + 1;
			while (third_digit <= '9')
			{
				print_set(first_digit, second_digit, third_digit);
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
}
