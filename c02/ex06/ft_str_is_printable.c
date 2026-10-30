/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:37:23 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/23 12:41:41 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	int		c;

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c < 32 || c > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	int c;
   for(c = 32; c <= 47; ++c)
   	//if (isprint(c)!= 0)
             printf("%c ", c);
  
    char src[20] = "";
   printf("\n%d",ft_str_is_printable(src));
   return(0);
}
*/