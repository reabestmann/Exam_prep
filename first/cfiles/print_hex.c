/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:52:37 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/25 12:17:53 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int 	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

void	print_hex(int	num)
{
	char	c;
	char	*hex;

	hex = "0123456789abcdef";
	
	if (num >= 16)
		print_hex(num/16);
	c = hex[num % 16];
	write(1, &c, 1);
}
	
int	main(int params, char **argv)
{
	if (params == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}
