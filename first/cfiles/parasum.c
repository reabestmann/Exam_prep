/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:37:06 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/24 19:46:29 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int params, char **argv)
{
	int	c;

	if (!argv[1])
		params = 1;
	c = params + 47;
	write (1, &c, 1);
	write (1, "\n", 1);
	return (0);
}
