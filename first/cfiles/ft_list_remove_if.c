/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 10:02:00 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/28 11:06:21 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int cmp(void *data1, void *data2) 
{
    int *a = (int *)data1;
    int *b = (int *)data2;
    return (*a - *b);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref)
{
	t_list	*current;
	t_list	*previous;

	current = *begin_list;
	previous = NULL;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			if (current == *begin_list)
			{
				*begin_list = current->next;
				free(current->data);
				free(current);
				current = *begin_list;
			}
			else
			{
				previous->next = current->next;
				free(current->data);
				free(current);
			}
			
		}
		else
			previous = current;
		current = current->next;

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
    t_list *member1 = malloc(sizeof(t_list));
    t_list *member2 = malloc(sizeof(t_list));
    t_list *member3 = malloc(sizeof(t_list));
    t_list *member4 = malloc(sizeof(t_list));
    t_list *member5 = malloc(sizeof(t_list));  // Added Minho here

    // Assigning data to each member
    member1->data = "Lee Taemin";
    member1->next = member2;
    member2->data = "Lee Jinki";
    member2->next = member3;
    member3->data = "Kim Jonghyun";
    member3->next = member4;
    member4->data = "Choi Minho";  // Minho is here
    member4->next = member5;
    member5->data = "Kim Kibum";
    member5->next = NULL;

    // Apply the fanchant function to each list element
    printf("Original list:\n");
    ft_list_foreach(member1, fanchant);

    // Remove "Kim Kibum" from the list
    ft_list_remove_if(&member1, "Kim Kibum");

    // Apply the fanchant function again after removal
    printf("\nList after removing 'Kim Kibum':\n");
    ft_list_foreach(member1, fanchant);

    // Free the remaining list nodes
    free(member1);
    free(member2);
    free(member3);
    free(member4);

    return 0;
}
