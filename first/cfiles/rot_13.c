/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:30:27 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/26 12:06:08 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_rot_alpha(char c)
{
	int	i;

	i = 13;
	if ((c >= 'a' && c <= 'z') ||  (c >= 'A' && c <= 'Z'))
	{
		if (c >= 'a' && c <= 'z')
		{
			i = 13 - ('z' - c);
			if (i <= 0)
				c = c + 13;
			else
				c = 'a' + i - 1;
		}
		if (c >= 'A' && c <= 'Z')
		{
			i = 13 - ('Z' - c);
			if (i <= 0)
				c = c + 13;
			else
				c = 'A' + i - 1;
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
			print_rot_alpha(str[i]);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
