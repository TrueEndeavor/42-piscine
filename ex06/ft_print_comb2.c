/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:54:54 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/28 18:49:48 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_numbers(char f_digit, char s_digit)
{
	ft_putchar(f_digit);
	ft_putchar(s_digit);
}

void	print_set(char f_quo, char s_quo, char f_digit, char s_digit)
{
	print_numbers(f_quo + '0', (f_digit % 10) + '0');
	ft_putchar(' ');
	print_numbers(s_quo + '0', (s_digit % 10) + '0');
}

void	print_digits(char f_quo, char s_quo, char f_digit, char s_digit)
{
	if (f_digit == 98 && s_digit == 99)
	{
		print_set(f_quo, s_quo, f_digit, s_digit);
	}
	else
	{
		print_set(f_quo, s_quo, f_digit, s_digit);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	first_digit;
	int	second_digit;
	int	f_quotient;
	int	s_quotient;

	first_digit = 0;
	while (first_digit <= 99)
	{
		second_digit = first_digit + 1;
		while (second_digit <= 99)
		{
			f_quotient = first_digit / 10;
			s_quotient = second_digit / 10;
			print_digits(f_quotient, s_quotient, first_digit, second_digit);
		second_digit++;
		}
	first_digit++;
	}
}
