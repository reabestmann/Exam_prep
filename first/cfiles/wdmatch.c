/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:27:17 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/05 12:49:29 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	wdmatch(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	if (*s1 == 0)
		return (1);
	return (0);
}
	
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int params, char **argv)
{
	if (params == 3)
	{
		if (wdmatch(argv[1], argv[2]))
			ft_putstr(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}
