/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:23:08 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/28 11:03:02 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdio.h>

typedef struct	s_list
{
	struct s_list	*next;
	void		*data;
}	t_list;

int	cmp(void *data1, void *data2);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

#endif
