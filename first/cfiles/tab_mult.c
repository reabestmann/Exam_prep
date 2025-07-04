/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:49:23 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/26 17:12:27 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int num)
{
	char	c;

	if (num > 9)
		ft_putnbr(num/10);
	c = num % 10 + '0';
	write (1, &c, 1);
}
	
int	ft_atoi(char *str)
{
	int	i;
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

void	tab_mult(int num)
{
	int	i;
	char	c;

	i = 1;
	if (num * 9 < 2147483647)
	{
		while (i < 10)
		{
			c = i + '0';
			write (1, &c, 1);
			write (1, " x ", 3);
			ft_putnbr(num);
			write (1, " = ", 3);
			ft_putnbr(num * i);
			if (i < 9)
				write (1, "\n", 1);
			i++;
		}
	}
}

int	main(int params, char **argv)
{
	if (params == 2)
		tab_mult(ft_atoi(argv[1]));
	write (1, "\n", 1);
}
