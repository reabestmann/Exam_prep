/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:07:03 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/26 14:11:59 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_alpha_mirror(char c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'a' && c <= 'm')
		{
			i = 'z' - c - (c - 'a');
			c += i;
		}
		else
		{
			i = c - 'a' + (c - 'z');
			c -= i;
		}
	}
	if (c >= 'A' && c <= 'Z')
	{
		if (c >= 'A' && c <= 'M')
		{
			i = 'Z' - c - (c - 'A');
			c += i;
		}
		else 
		{
			i = c - 'A' + (c - 'z');
			c -= i;
		}
			
	}
	write (1, &c, 1);
}

int	main(int params, char **argv)
{
	int	i;
	char	*str;

	i = 0;
	str = argv[1];
	if (params == 2)
	{
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
				print_alpha_mirror(str[i]);
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

