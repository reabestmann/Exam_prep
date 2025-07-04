/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:31:51 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/26 12:50:51 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int params, char **argv)
{
	int	i;
	char	*str;
	char	*c;
	char	*d;

	i = 0;
	str = argv[1];
	c = argv[2];
	d = argv[3];
	if (params == 4 && c[1] == 0 && d[1] == 0)
	{
		while (str[i])
		{
			if (str[i] == argv[2][0])
				write(1, &d[0], 1);
			else
				write (1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}	
