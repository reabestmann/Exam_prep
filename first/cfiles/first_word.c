/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:31:52 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/25 14:17:45 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int params, char **argv)
{
	int	i;
	char	*str;
	
	str = argv[1];
	i = 0;
	while (params == 2 && str[i])
	{
		while (str[i] == ' ' || str[i] == '	')
			i++;
		while (str[i] != ' ' && str[i] != '	')
		{
			write(1, &str[i], 1);
			i++;
			if (str[i] == ' ' || str[i] == '\t')
			{
				write (1, "\n", 1);
				return(0);
			}
		}
	}
	write(1, "\n", 1);
	return(0);
}
