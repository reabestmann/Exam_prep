/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:48:52 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/24 20:06:00 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_pgcd(int n1, int n2)
{
	int	res;
	int	i;

	res = 1;
	i = 2;
	if (n1 < 0 || n2 < 0)
		return (1);
	while (i < n1 && i < n2)
	{
		if (n1 % i == 0 && n2 % i == 0)
			res = i;
		i++;
	}
	printf("%i", res);
	return (0);
}

int	main(int params, char **argv)
{
	if (params == 3)
		ft_pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
