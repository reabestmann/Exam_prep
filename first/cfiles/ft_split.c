/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:17:04 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/27 13:41:45 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_wordcount(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			count++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return (count);
}

void	ft_freemem(char	**arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	*ft_makestr(char *str, int start)
{
	int	i;
	int	end;
	char	*res;

	end = start;
	while (str[end] && !ft_isspace(str[end]))
		end++;
	res = malloc(end - start + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
	{
		res[i] = str[start];
		i++;
		start++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char *str)
{
	char	**split;
	int	j;
	int	i;

	split = malloc((ft_wordcount(str) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && ft_isspace(str[i]))
			i++;
		if (str[i] && !ft_isspace(str[i]))
		{
			split[j] = ft_makestr(str, i);
			if (!split[j])
			{
				ft_freemem(split, j);
				return (NULL);
			}	
			j++;
			while (str[i] && !ft_isspace(str[i]))
				i++;
		}
	}
	split[j] = NULL;
	return (split);
}
		
#include <unistd.h>
#include <stdio.h>

int	main(int params, char **argv)
{
	if (params == 2)
	{
		char	**split = ft_split(argv[1]);
		if (!split)
		{
			printf("ft_split failed\n");
			free(split);
			return (1);
		}
		int	i = 0;
		while (split[i])
		{
			printf("%i.: [%s]\n", i + 1, split[i]);
			i++;
		}
		while (i > 0)
		{
			free(split[i - 1]);
			i--;
		}
		free(split);
	}
	return (0);
}
