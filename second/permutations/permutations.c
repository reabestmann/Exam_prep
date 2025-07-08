#include <unistd.h>

void	ft_swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_string(char *str)
{
	int	i = 0;
	int	j;

	while(str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] > str[j])
				ft_swap(&str[i], &str[j]);
			j++;
		}
		i++;
	}
}

void	permute(char *str, int start)
{
	int	i;
	int	len;

	if (!str[start])
	{
		len = 0;
		while (str[len])
			len++;
		write(1, str, len);
		write(1, "\n", 1);
		return ;
	}
	i = start;
	while (str[i])
	{
		ft_swap(&str[start], &str[i]);
		permute(str, start + 1);
		ft_swap(&str[start], &str[i]);
		i++;
	}
}

int main(int params, char **argv)
{
	if (params == 2)
	{
		sort_string(argv[1]);
		permute(argv[1], 0);
	}
	return (0);
}
