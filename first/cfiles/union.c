/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:26:02 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/05 15:51:22 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double(char *str, int i, char c)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (1);
		j++;
	}
	return (0);
}

void	print_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!is_double(s1, i, s1[i]))
			write (1, &s1[i], 1);
		i++;
	}
	while (s2[j])
	{
		if (!is_double(s2, j, s2[j]))
		{
			if (!is_double(s1, i, s2[j]))
				write (1, &s2[j], 1);
		}
		j++;
	}
}

int	main(int params, char **argv)
{
	if (params == 3)
		print_union(argv[1], argv[2]);
	write(1, "\n", 1);
}
