/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:35:08 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/28 17:10:48 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	num;

	num = 1;
	while (num <= n)
	{
		if (num == n)
			return (1);
		num *= 2;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int params, char **argv)
{
	if (params == 2)
		printf("%i\n", is_power_of_2(atoi(argv[1])));
	return (0);
}*/
	
