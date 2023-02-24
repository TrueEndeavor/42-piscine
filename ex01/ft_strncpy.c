/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:33:35 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/24 08:48:31 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <string.h>no
#include <stdio.h>
int main()
{
    char ss1[20] = "Hello there venus";
    char dd1[40] = "";

	printf("\n\n(ft_strncpy) copied string : %s\n", ft_strncpy(dd1,ss1,25));   
	printf("Len of dest1 after s        :%ld ",strlen(dd1));
   return(0);
}
*/