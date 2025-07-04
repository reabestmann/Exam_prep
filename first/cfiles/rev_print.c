/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:09:49 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/25 17:27:51 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen (char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main (int params, char **argv)
{
	int	len;

	len = 0;
	if (params == 2)
	{
		len = ft_strlen(argv[1]);
		while(len >= 0)
		{
			write (1, &argv[1][len], 1);
			len--;
		}
	}
	write (1, "\n", 1);
	return (0);
}
