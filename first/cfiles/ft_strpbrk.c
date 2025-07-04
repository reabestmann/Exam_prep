/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:29:32 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/28 13:11:22 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != *s1)
	{
		i++;
		if (s2[i] == 0 && s2[i] != *s1)
		{
			i = 0;
			s1++;
		}
		if (*s1 == 0)
			return (NULL);
	}
	return ((char *)s1);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int params, char	**argv)
{
	if (params == 3)
	{
		printf("mine: %s\n", ft_strpbrk(argv[1], argv[2]));
		printf("og: %s\n", strpbrk(argv[1], argv[2]));
	}
	return (0);
}*/
