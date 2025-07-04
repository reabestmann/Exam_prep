/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:35:11 by rbestman          #+#    #+#             */
/*   Updated: 2025/02/25 16:02:37 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s2);
	while (i < len)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main (void)
{
	char	*s1;
	char	*s2;

	s2 = "Taemin";
	s1 = malloc(ft_strlen(s2) + 1);
	if (!s1)
		return (1);
	ft_strcpy(s1, s2);
	ft_putstr(s1);
	free(s1);
	return (0);
}*/
