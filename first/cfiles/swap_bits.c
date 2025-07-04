/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:18:23 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/05 14:25:33 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	int	i;
	unsigned char	swapped;

	i = 0;
	swapped = 0;
	while (i < 4)
	{
		if (octet & (1 << i))
			swapped |= (1 << (4 + i));
		i++;
	}
	i = 7;
	while (i > 3)
	{
		if (octet & (1 << i))
			swapped |= (1 << (i - 4));
		i--;
	}
	return (swapped);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 8;
	while (i--)
		putchar(octet & (1 << i) ? '1' : '0');
}

int	main(int params, char **argv)
{
	if (params == 2)
	{
		printf("\nog: ");
		print_bits((unsigned char)atoi(argv[1]));
		printf("\nswapped: ");
		print_bits(swap_bits((unsigned char)atoi(argv[1])));
	}
	write (1, "\n", 1);
	return (0);
}*/
