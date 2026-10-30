/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:38:12 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/12 17:40:45 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;
	int	*tmp;

	tmp = &i;
	*tmp = *a;
	*a = *b;
	*b = *tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
