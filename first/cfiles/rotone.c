/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:16:17 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/26 12:29:03 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_rotone(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c == 'z')
			c = 'a';
		else
			c = c + 1;
	}
	if (c >= 'A' && c <= 'Z')
	{
		if (c == 'Z')
			c = 'A';
		else
			c = c + 1;
	}
	write (1, &c, 1);
}

int	main(int params, char **argv)
{
	int	i;

	i = 0;
	if (params == 2)
	{
		while (argv[1][i])
		{
			print_rotone(argv[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
}
