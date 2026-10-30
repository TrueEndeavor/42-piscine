/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:33:52 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/23 12:39:05 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
    char src[20] = "asdf";
	//printf("%d\n", isalpha(src));   
	printf("%d\n",ft_str_is_alpha(src));   
   
   return(0);
}
*/