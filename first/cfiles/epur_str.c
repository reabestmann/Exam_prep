/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:15:19 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/05 18:44:17 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int params, char **argv)
{
	int	i;
	
	i = 0;
	if (params == 2)
	{
		while (is_space(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			while (is_space(argv[1][i]) && is_space(argv[1][i + 1]))
				i++;
			if (is_space(argv[1][i]) && argv[1][i + 1] == 0)
				break ;
			if (argv[1][i] != '\t')
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
