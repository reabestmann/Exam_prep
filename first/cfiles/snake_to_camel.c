/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:53:52 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/05 17:22:20 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_snake(char *str)
{
	while (*str++)
		if ((!(*str >= 'a') && !(*str <= 'z')) && *str != '_')
			return (0);
	return (1);
}

int	main(int params, char **argv)
{
	int	i;

	i = 0;
	if (params == 2)
	{
		if (is_snake(argv[1]))
		{
			while (argv[1][i])
			{
				if (argv[1][i] == '_')
				{
					i++;
					argv[1][i] -= 32;
				}
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
