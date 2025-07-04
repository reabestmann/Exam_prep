/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:51:19 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/26 15:52:52 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int params, char **argv)
{
	if (params == 4)
	{
		if (argv[2][0] == '+')
			printf("%i\n", atoi(argv[1]) + atoi(argv[3]));
		if (argv[2][0] == '-')
			printf("%i\n", atoi(argv[1]) - atoi(argv[3]));
		if (argv[2][0] == '*')
			printf("%i\n", atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '/')
			printf("%i\n", atoi(argv[1]) / atoi(argv[3]));
		if (argv[2][0] == '%')
			printf("%i\n", atoi(argv[1]) % atoi(argv[3]));
	}
	else
		write (1, "\n", 1);
	return (0);
}
