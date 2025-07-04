/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:46:03 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/27 14:54:59 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	digit_count(int nbr)
{
	int	count;

	count = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int	len;
	char	*str;
	int	digit;
	int	i;

	len = digit_count(nbr);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = 0;
	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
		i++;
	}
	while (len-- > i)
	{
		digit = nbr;
		while (digit > 9)
			digit %= 10;
		str[len] = digit + '0';
		nbr = nbr/10;
	}
	return (str);
}

#include <unistd.h>

int	main(void)
{
	int	num;
	int	i;
	char	*str;

	num = -374273983;
	i = 0;
	str = ft_itoa(num);
	if (!str)
		return (1);
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
