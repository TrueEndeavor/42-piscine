/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:27:47 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/23 19:45:42 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		capitalize;
	char	c;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (capitalize == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		if (capitalize == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A' )
			|| (c > 'Z' && c < 'a') || c > 122)
			capitalize = 1;
		else
			capitalize = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
   char src[200] = "s, comment tu Vas ? 42mots quarante-deux; cinquante+et+un";
   printf("%s",ft_strcapitalize(src));
   return(0);
}
*/