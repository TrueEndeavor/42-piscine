/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:16:38 by lannur-s          #+#    #+#             */
/*   Updated: 2023/02/16 17:33:13 by lannur-s         ###   ########.fr       */
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

char	*ft_strcat(char *s1, char *s2)
{
	int		j;
	int		size;

	j = 0;
	size = ft_strlen(s1);
	while (s2[j] && s2[j] != '\0')
	{
		s1[size + j] = s2[j];
		j++;
	}
	s1[size + j] = '\0';
	return (s1);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[40] = "Test1";
	char s2[40] = "OK";

	char s3[40] = "Test1";
	char s4[40] = "OK";
	printf("%s\n", strcat(s1,s2));
	printf("%s\n", ft_strcat(s3,s4));
}*/