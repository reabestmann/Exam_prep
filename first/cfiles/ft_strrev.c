/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:11:49 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/28 13:45:37 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	temp = 0;
	i = 0;
	len = -1;
	while (str[len])
		len++;
	while (len > 0)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}
/*
#include <unistd.h>

int	main(int params, char **argv)
{
	int	i;
	char	*str;

	i = 0;
	str = NULL;
	if (params == 2)
	{
		str = ft_strrev(argv[1]);
		while(str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (0);
}*/
