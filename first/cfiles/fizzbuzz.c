/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:22:31 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/25 14:59:39 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(int i)
{
	if (i < 10)
	{
		i = i + '0';
		write(1, &i, 1);
	}
	else if (i > 9)
	{
		print_int(i/10);
		print_int(i%10);
	}
}
int	main(void)
{
	int	i;

	i = 0;
	while (i < 101)
	{
		if (i%3 != 0 || i%5 != 0)
		{
			print_int(i);
			write (1, "\n", 1);
			i++;
		}
		if (i%3 == 0 && i%5 != 0)
		{
			write (1, "fizz\n", 5);
			i++;
		}
		if (i%5 == 0 && i%3 != 0)
		{
			write (1, "buzz\n", 5);
			i++;
		}
		if (i%3 == 0 && i%5 == 0)
		{
			write (1, "fizzbuzz\n", 9);
			i++;
		}
	}
	return (0);
}
