/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:11:53 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/24 18:24:07 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_range_size(int start, int end)
{
	int	size;

	size = 0;
	if (start < end)
	{
		while (start < end)
		{
			start++;
			size++;
		}
	}
	if (end < start)
	{
		while (end < start)
		{
			start--;
			size++;
		}
	}
	return (size);
}

int	*ft_rrange(int start, int end)
{
	int	i;
	int	size;
	int	*rrange;

	i = 0;
	size = ft_range_size(start, end);
	rrange = malloc(sizeof(int) * size);
	while (i <= size)
	{
		rrange[i] = end;
		if (start < end)
			end--;
		if (end < start)
			end++;
		i++;
	}
	return (rrange);
}

#include <stdio.h>

int	main(int params, char **argv)
{
	int	*rrange;
	int	size;
	int	i;

	rrange = NULL;
	size = 0;
	i = 0;
	if (params == 3)
	{
		size = ft_range_size(atoi(argv[1]), atoi(argv[2]));
		rrange = ft_rrange(atoi(argv[1]), atoi(argv[2]));
		while (i <= size)
		{
			printf("%i\n", rrange[i]);
			i++;
		}
	}
	else printf("usage: ./ft_rrange start end\n");
	free(rrange);
	return (0);
}
