/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:31:22 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/06 18:15:56 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	power(int base, int exponent)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (i < exponent)
	{
		result *= base;
		i++;
	}
	return (result);
}

int	is_valid(int c, int base)
{
	char	*lc;
	char	*uc;
	int	i;
	
	lc = "0123456789abcdef";
	uc = "0123456789ABCDEF";
	i = 0;
	while (i < base)
	{
		if (lc[i] == c || uc[i] == c)
			return (1);
		i++;
	}
	return (0);
}
	
int	check_and_len(const char *str, int str_base)
{
	int	len;
	
	len = 0;
	if (str_base == 10 && str[len] == '-')
		len++;
	while (str[len])
	{
		if (!is_valid(str[len], str_base))
			return (0);
		len++;
	}
	return (len);
}
		
int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	len;
	int	res;
	int	c;

	len = check_and_len(str, str_base);
	res = 0;
	i = 0;
	while (i < len)
	{
		c = str[len - 1- i] - '0';
		if (c < 0)
			break;
		if (c > 9)
			c -= 7;
			if (c > 15)
				c -= 32;
		res = res + c * power(str_base, i);
		i++;
	}
	if (str[0] == '-')
		res *= -1;
	return (res);
}

#include <stdio.h>

int	main(int params, char **argv)
{
	if (params == 3)
		printf("%i\n", ft_atoi_base(argv[1], ft_atoi_base(argv[2], 10)));
	return (0);
}
