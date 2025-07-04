/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:12:15 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/03 14:10:02 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		if (tab[len] > i)
			i = tab[len];
		len--;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	int tab[0] = {};

	printf("%i\n", max(tab, 0));
	return (0);
}*/
