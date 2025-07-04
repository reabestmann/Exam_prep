/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:39:55 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/27 14:04:57 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
*/
#include <stdio.h>

int	main(int params, char **argv)
{
	if (params == 3)
		printf("%i\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}/*
