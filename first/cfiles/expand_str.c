/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:04:26 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/06 14:29:34 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	is_end(char c)
{
	if (c == 0)
		return (1);
	return (0);
}

int	main(int params, char **argv)
{
	int	i;
	char	*str;

	i = 0;
	if (params == 2)
	{
		str = argv[1];
		while (is_space(str[i]))
			i++;
		while (str[i])
		{
			while (is_space(str[i]) && is_space(str[i + 1]))
				i++;
			if (!is_space(str[i]))
				write(1, &str[i], 1);
			if (is_space(str[i]) && !is_end(str[i + 1]))
				write(1, "   ", 3);
			if (is_space(str[i]) && is_end(str[i + 1]))
				break;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
