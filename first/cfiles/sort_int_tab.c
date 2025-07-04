/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbestman <rbestman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:07:22 by rbestman          #+#    #+#             */
/*   Updated: 2025/03/28 11:51:25 by rbestman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	int	temp;

	j = 0;
	i = 1;
	temp = 0;
	while (j < size - 1)
	{
		i = j + 1;
		while (i < size)
		{
			if (tab[j] > tab[i])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		j++;
	}
}

#include <stdio.h>

int main(void) {
    int tab[] = {9, 3, 7, 1, 4};
    unsigned int size = 5;

    printf("Before sorting: ");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    sort_int_tab(tab, size);

    printf("After sorting: ");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
