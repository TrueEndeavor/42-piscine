/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:41:59 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/23 12:39:47 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXINPUT 100
int main()
{
    char src[20] = "12345ew6789";
    int length,i; 

    length = strlen (src);
    for (i=0;i<length; i++)
        if (!isdigit(src[i]))
        {
            printf ("Entered input is not a number\n");
        }
    printf ("Given input is a number\n");
	printf("\nft_%d", ft_str_is_numeric(src));
}
*/