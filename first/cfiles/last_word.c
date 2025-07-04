/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:51:26 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/28 16:24:42 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	whitespace(char	c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	wordcount(char	*str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!whitespace(str[i]))
			count++;
	while (str[i])
	{
		i++;
		if (whitespace(str[i]) && !whitespace(str[i+1]))
			count++;
	}
	return (count);
}
	
void	print_last_word(char *str)
{
	int	i;

	i = 0;
	if (wordcount(str) > 1)
	{
		i = ft_strlen(str) - 1;
		if (whitespace(str[i]))
			while (whitespace(str[i-1]))
				i--;
			i--;
		if (!whitespace(str[i]))
			while (!whitespace(str[i-1]))
				i--;
	}

	while (str[i])
	{
		if (!whitespace(str[i]))
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int params, char **argv)
{
	if (params == 2)
		print_last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
