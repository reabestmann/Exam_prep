/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:04:09 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/25 16:30:29 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;
	printf("before:\n a= %i, b = %i\n", a, b);
	ft_swap(&a, &b);
	printf("after:\n a= %i, b = %i\n", a, b);
	return (0);
}*/
