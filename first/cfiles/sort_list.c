/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:52:14 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/28 12:11:52 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	temp;
	t_list *current;

	current = lst;
	temp = 0;
	while (lst->next)
	{
		if (!cmp(lst->data, lst->next->data))
		{
			temp = lst->data;
			lst->data = lst ->next->data;
			lst->next->data = swap;
			lst = current;
		}
		else
			lst = lst->next;
	}
	lst = curr;
	return (lst);
}
