/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:46:37 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/28 14:48:23 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double(char	c, char	*str, int j)
{
	int	i;

	i = 0;
	while (j > 0)
	{
		if (c == str[j-1])
			i++;
		j--;
	}
	return (i);
}
		
void	inter(char *str, char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (set[i] != str[j])
			i++;
			if (set[i] == 0)
			{
				i = 0;
				j++;
			}
		else
			if (is_double(str[j], str, j) == 0)
				write(1, &str[j], 1);
			j++;
	}
}
		
int	main(int params, char **argv)
{
	if (params == 3)
	{
		inter(argv[1], argv[2]);
	}
	write (1, "\n", 1);
	return (0);
}
