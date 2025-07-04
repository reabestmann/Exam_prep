/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:31:57 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/25 17:06:26 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_alpha(char alpha)
{
	int	i;

	i = 1;
	if (alpha >= 'a' && alpha <= 'z')
		i = alpha - 'a' + 1;
	else if (alpha >= 'A' && alpha <= 'Z')
		i = alpha - 'A' + 1;
	while (i > 0)
	{
		write(1, &alpha, 1);
		i--;
	}
}
	
int main(int params, char **argv)
{
	int	i;
	char	*str;

	i = 0;
	str = argv[1];
	if (params == 2)
	{
		while (str[i])
		{
			put_alpha(str[i]);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
