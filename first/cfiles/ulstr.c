/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:51:32 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/26 13:05:14 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int params, char **argv)
{
	int	i;
	char	*str;

	i = 0;
	str = argv[1];
	if (params == 2)
	{
		while(str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if(str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
