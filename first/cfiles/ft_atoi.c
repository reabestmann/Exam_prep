/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:21:44 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/27 13:39:14 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (i < ft_nlen(str))
	{ 
		if (str[i] == '-')
			i++;
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		result *= -1;
	return (result);
}
*/
#include <stdio.h>

int	main(int params, char **argv)
{
	if(params == 2)
		printf("%i\n", ft_atoi(argv[1]));
	return (0);
}/*
