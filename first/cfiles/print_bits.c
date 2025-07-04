/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:10:57 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/03 16:26:15 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	int remainder[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	i = 7;
	while (i >= 0)
	{
		remainder[i] = octet % 2 + '0';
		octet /= 2;
		i--;
	}
	while (i <= 8)
	{
		write (1, &remainder[i], 1);
		i++;
	}
}

/*
int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}
	
int	main(int params, char **argv)
{
	if (params == 2)
		print_bits((unsigned char)ft_atoi(argv[1]));
	return (0);
}*/
