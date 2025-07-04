/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:23:05 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/05 18:11:49 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(unsigned int i)
{
	if (i < 10)
	{
		i += '0';
		write (1, &i, 1);
	}
	else if (i > 9)
	{
		print_int(i / 10);
		print_int(i % 10);
	}
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	res;

	res = 0;
	i = 0;
	if (str[i] == '-')
		return (0);
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
			res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

unsigned int	is_prime(unsigned int n)
{
	unsigned int	div;

	div = n - 1;
	while (div > 1)
	{
		if (n % div == 0)
			return (0);
		div--;
	}
	return (1);
}
			
unsigned int	add_prime_sum(unsigned int n)
{
	unsigned int	i;
	unsigned int	res;

	i = 2;
	if (n == 1)
		return (0);
	res = n;
	while (i < n)
	{
		if (is_prime(i))
			res += i;
		i++;
	}
	return (res);
}
	
int	main(int params, char **argv)
{
	if (params == 2)
		print_int(add_prime_sum(ft_atoi(argv[1])));
	else
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}		
