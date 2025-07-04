/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 09:28:11 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/28 10:01:18 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*current;

	current = begin_list;
	while (current)
	{
		(*f)((*current).data);
		current = (*current).next;
	}
}

#include <unistd.h>

void	fanchant(void *str)
{
	char	*shout;

	shout = (char *)str;
	while (*shout)
	{
		write(1, shout, 1);
		shout++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	t_list member1, member2, member3, member4, member5, group;

	member1.data = "Lee Taemin";
	member1.next = &member2;
	member2.data = "Lee Jinki";
	member2.next = &member3;
	member3.data = "Kim Jonghyun";
	member3.next = &member4;
	member4.data = "Choi Minho";
	member4.next = &member5;
	member5.data = "Kim Kibum";
	member5.next = &group;
	group.data = "SHINee";
	group.next = NULL;

	ft_list_foreach(&member1, fanchant);
	return	(0);
}
