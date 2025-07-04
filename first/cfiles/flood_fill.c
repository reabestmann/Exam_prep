/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 08:29:03 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/28 09:20:33 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill(char **tab, t_point size, char old, t_point begin)
{
	if (begin.y >= size.y || begin.x >= size.x || begin.y < 0 || begin.x < 0)
		return ;
	if (tab[begin.y][begin.x] != old)
		return;
	tab[begin.y][begin.x] = 'F';
	fill(tab, size, old, (t_point){begin.x - 1, begin.y});
	fill(tab, size, old, (t_point){begin.x + 1, begin.y});
	fill(tab, size, old, (t_point){begin.x, begin.y - 1});
	fill(tab, size, old, (t_point){begin.x, begin.y + 1});
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char old;

	old = tab[begin.y][begin.x];
	if (old == 'F')
		return;
	fill(tab, size, old, begin);
}
