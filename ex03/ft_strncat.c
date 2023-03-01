/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:55:06 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/16 17:33:44 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	int				size;

	j = 0;
	size = ft_strlen(dest);
	if (nb == 0)
		return (dest);
	while (src[j] && src[j] != '\0' && j < nb)
	{
		dest[size + j] = src[j];
		j++;
	}
	dest[size + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[40] = "Test1";
	char s2[40] = "OK Very well and good";

	char s3[40] = "Test1";
	char s4[40] = "OK Very well and good";
	printf("%s\n", strncat(s1,s2,7));
	printf("%s\n", ft_strncat(s3,s4, 7));
}
*/