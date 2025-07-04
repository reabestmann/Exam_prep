/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:59:21 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/27 15:27:43 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char	*str)
{
	size_t	i;

	i = 1;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int	i;

	dst = malloc(ft_strlen(src));
	if (!dst)
		return(NULL);
	i = 0;
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
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
		str = ft_strdup(argv[1]);
		while (str[i])
			write (1, &str[i++], 1);
	}
	write (1, "\n", 1);
	free(str);
	return (0);
}*/
