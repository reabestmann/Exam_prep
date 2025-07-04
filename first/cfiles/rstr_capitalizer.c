/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:19:04 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/25 13:06:47 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_last(char c)
{
	if (c == 0 || c == ' ')
		return (1);
	return (0);
}

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(is_last(str[i + 1])))
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		if (is_last(str[i + 1]))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
}
int	main(int params, char **argv)
{
	int	i;

	i = 1;
	while (i < params)
	{
		rstr_capitalizer(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	if (params == 1)
		write (1, "\n", 1);
	return (0);
}
