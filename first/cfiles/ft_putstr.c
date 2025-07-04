/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:03:05 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/25 15:28:54 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

/*int	main(int params, char **argv)
{
	int	i;

	i = 1;
	if (params > 1)
	{
		while(argv[i])
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}*/
