/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:29:15 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/28 09:20:11 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
#define FLOOD_FILL_H

typedef struct s_point
{
	int x;
	int y;
}	t_point;

void	flood_fill(char **tab, t_point size, t_point begin);
void	fill(char **tab, t_point size, char old, t_point begin);
char	**make_area(char **zone, t_point size);

#endif
