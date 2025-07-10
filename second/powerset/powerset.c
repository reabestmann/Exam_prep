#include <stdio.h>
#include <stdlib.h>

void	print_subset(int *subset, int size)
{
	int	i = 0;

	while (i < size)
	{
		printf("%d", subset[i]);
		if (i + 1 != size)
			printf(" ");
		i++;
	}
	printf("\n");
}

void	find_subsets(int target, int *set, int size, int *subset, int index, int pos, int sum)
{
	if (pos == size)
	{
		if (sum == target)
			print_subset(subset, index);
		return ;
	}
	subset[index] = set[pos];
	find_subsets(target, set, size, subset, index + 1, pos + 1, sum + set[pos]);
	find_subsets(target, set, size, subset, index, pos + 1, sum);
}

int	main(int params, char **argv)
{
	if (params < 2)
		return (0);

	int	target = atoi(argv[1]);
	int	i = 0;
	int	size = params - 2;
	int	*set = malloc(sizeof(int) * size);
	int	*subset = malloc(sizeof(int) * size);

	if (!set || !subset)
		return (1);
	while (i < size)
	{
		set[i] = atoi(argv[i + 2]);
		i++;
	}
	find_subsets(target, set, size, subset, 0, 0, 0);
	free(set);
	free(subset);
	return (0);
}
