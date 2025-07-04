/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits_rev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:24:32 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/28 12:53:12 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	int remainder[8]= {0,0,0,0,0,0,0,0};
	i = 7;
	while (i >= 0)
	{
		remainder[i] = octet % 2 + '0';
		octet /= 2;
		i--;
	}
	while (i < 8)
	{
		write (1, &remainder[i], 1);
		i++;
	}
}

#include <stdlib.h>

int	main(int params, char **argv)
{
	if (params == 2)
		print_bits((unsigned char)atoi(argv[1]));
	return (0);
}
