/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:03:05 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/25 15:12:44 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &i, 1);
		i++;
	}
}

int	main(int params, char **argv)
{
	if (params == 2)
		ft_putstr(argv[0][1]);
	return (0);
}
