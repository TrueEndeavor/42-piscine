/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:38:00 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/12 16:41:40 by lannur-s         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	pass;

	pass = 0;
	while (pass < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		pass++;
	}
}
