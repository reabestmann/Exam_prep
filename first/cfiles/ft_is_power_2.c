/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_power_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:54:07 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/28 13:04:32 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

int	main(int params, char **argv)
{
	if (params == 2)
		printf("%i", is_power_of_2((unsigned int)atoi(argv[1])));
	return (0);
}
