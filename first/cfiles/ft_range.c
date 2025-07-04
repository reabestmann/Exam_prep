/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:23:46 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/24 18:10:36 by rbestman         ###   ########.fr       */
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
        else if (end < start)
        {
                while (end < start)
                {
                        end++;
                        size++;
                }
        }
	return (size);
}

int	*ft_range(int start, int end)
{
	int	*range;
	int	i;
	int	size;

	size = ft_range_size(start, end);
	range = malloc(sizeof(int) * size);
	i = 0;
	while (i <= size)
	{	
		range[i] = start;
			if (start < end)
				start++;
			else if (start > end)
				start--;
		i++;
	}
	return (range);
}

#include <stdio.h>

int	main(int params, char **argv)
{
	int	*range;
	int	i;
	int size;

	size = 0;
	range = NULL;
	i = 0;
	if (params == 3)
	{
		size = ft_range_size(atoi(argv[1]), atoi(argv[2]));
		range = ft_range(atoi(argv[1]), atoi(argv[2]));
		while (i <= size)
		{	
			printf("%i\n", range[i]);
			i++;
		}
	}
	else printf("usage: ./ft_range start end\n");
	free(range);
	return (0);
}
