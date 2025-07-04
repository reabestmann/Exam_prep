/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rostring.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:56:42 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/27 16:06:53 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_wordcount(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return (i);
}

int	ft_lettercount(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		while (*str && !ft_isspace(*str))
		{
			i++;
			str++;
		}
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	skip_first(char *str)
{
	int	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	while (!ft_isspace(str[i]))
		i++;
	while (ft_isspace(str[i]))
		i++;
	return (i);
}

char	*ft_rostring(char *str)
{
	int	start;
	int	i;
	int	words;
	char	*new;

	words = ft_wordcount(str);
	new = malloc(ft_lettercount(str) + words);
	start = 0;
	if (ft_wordcount(str) > 1)
		start = skip_first(str);
	i = 0;
	while (str[start])
	{
		while (str[start] && !ft_isspace(str[start]))
		{
			new[i] = str[start];
			i++;
			start++;
		}
		new[i] = ' ';
		i++;
		while (ft_isspace(str[start]))
			start++;
	}
	if (words > 1)
	{
		start = 0;
		while (ft_isspace(str[start]))
			start++;
		while (!ft_isspace(str[start]))
		{
			new[i] = str[start];
			i++;
			start++;
		}
		new[i] = 0;
	}
	return (new);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int params, char **argv)
{
	char	*str;

	str = NULL;
	if (params > 1)
	{
		str = ft_rostring(argv[1]);
		ft_putstr(str);
		free(str);
	}
	write (1, "\n", 1);
	return (0);
}
