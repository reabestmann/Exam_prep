/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:17:58 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/27 16:42:09 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

void	ft_putword(char *str, int start)
{
	while (str[start] && !ft_isspace(str[start]))
		write(1, &str[start++], 1);
}

int	ft_firstlen(char *str)
{
	int	len;

	len = 0;
	while (!ft_isspace(str[len]))
		len++;
	return (len);
}

void	rev_wstr(char *str)
{
	int	start;
	int	end;

	start = ft_strlen(str);
	end = ft_firstlen(str);
	while (start > end)
	{
		while (!ft_isspace(str[start]))
			start--;
		ft_putword(str, start + 1);
		write (1, " ", 1);
		start--;
	}
	ft_putword(str, 0);
}
	
int	main(int params, char **argv)
{
	if (params == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
