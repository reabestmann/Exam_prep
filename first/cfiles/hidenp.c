/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:28:49 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/24 18:42:13 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_hidenp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		if (s1[j] == s2[i])
			j++;
		i++;
	}
	if (s1[j] == 0)
		return (49);
	return(48);
}
int	main(int params, char **argv)
{
	int	result;

	result = 0;
	if (params == 3)
	{
		result = ft_hidenp(argv[1], argv[2]);
		write(1, &result, 1);
	}
	write (1, "\n", 1);
	return (0);
}
