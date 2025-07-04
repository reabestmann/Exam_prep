/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:13:16 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/26 14:48:10 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isbigalpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return(0);
}

int	issmallalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

void	print_snake(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		while(issmallalpha(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
		if (isbigalpha(str[i]))
		{
			write(1, "_", 1);
			str[i] += 32;
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int params, char **argv)
{
	int	i;
	char	*str;

	i = 0;
	str = argv[1];
	if (params == 2)
	{
		if (issmallalpha(str[i]))
			i++;	
			while(issmallalpha(str[i]) || isbigalpha(str[i]))
				i++;
		if (str[i] == 0)
			print_snake(str);
	}
	write (1, "\n", 1);
	return (0);
}

			
