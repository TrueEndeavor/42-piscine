/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:37:51 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/23 12:43:43 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
   char src[20] = "";
   printf("%s",ft_strlowcase(src));
   return(0);
}
*/