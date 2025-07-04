/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:37:57 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/27 14:58:41 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (accept[j])
	{
		if (s[i] != accept[j])
			j++;
		if (s[i] && s[i] == accept[j])
		{
			j = 0;
			i++;
		}
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int params, char **argv)
{
	if (params == 3)
	{
		printf("mine: %lu\n", ft_strspn(argv[1], argv[2]));
		printf("og: %lu\n", strspn(argv[1], argv[2]));
	}
	return (0);
}*/
		
