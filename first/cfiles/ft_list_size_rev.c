/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size_rev.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:12:16 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/28 12:20:33 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*current;
	int	size;

	current = begin_list;
	size = 0;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}

#include <stdio.h>

int	main(void)
{
	t_list m1, m2, m3, m4, m5;

	m1.data = "Key";
	m1.next = &m2;
	m2.data = "Minho";
	m2.next = &m3;
	m3.data = "Onew";
	m3.next = &m4;
	m4.data = "Jjong";
	m4.next = &m5;
	m5.data = "Taemin";
	m5.next = NULL;

	printf("%i\n", ft_list_size(&m1));
	return (0);
}
