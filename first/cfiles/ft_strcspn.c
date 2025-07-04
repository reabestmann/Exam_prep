/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:11:33 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/27 14:37:18 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j] && reject[i] != s[j])
	{
		i++;
		if (reject[i] == s[j])
		{
			i = 0;
			j++;
		}
	}
	return (j);
}
*/
#include <stdio.h>
#include <string.h>

int	main(int params, char **argv)
{
	if (params == 3)
	{
		printf("mine: %lu\n", ft_strcspn(argv[1], argv[2]));
		printf("og: %lu\n", strcspn(argv[1], argv[2]));
	}
	return (0);
} /*
