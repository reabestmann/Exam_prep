/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:29:06 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/05 12:25:57 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	reversed;
	int	i;

	reversed = 0;
	i = 0;
	while (i <= 7)
	{
		if (octet & (1 << i))
			reversed |= 1 << (7 - i);
		i++;
	}
	return (reversed);
}
/*
#include <stdio.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 8;
	while (i--)
		putchar((octet & (1 << i)) ? '1' : '0');
}

int	main(int params, char **argv)
{
	if (params == 2)
	{
		printf("og: ");
		print_bits((unsigned char)atoi(argv[1]));
		printf("\nReversed: ");
		print_bits(reverse_bits((unsigned char)atoi(argv[1])));
	}
	return (0);
}*/
