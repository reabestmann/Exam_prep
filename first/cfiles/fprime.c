/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:44:27 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/27 17:08:37 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isprime(int num)
{
	int	i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int num)
{
	int	i;

	i = 2;
	if (ft_isprime(num))
	{
		printf("%i", num);
		return ;
	}
	while (i < num)
	{
		if (num % i == 0)
		{
			printf("%i*", i);
			num /= i;
		}
		if (num % i != 0)
			i++;
	}
	printf("%i", num);
}

int	main(int params, char **argv)
{
	if (params == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return(0);
}
