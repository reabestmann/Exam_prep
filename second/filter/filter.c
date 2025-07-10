#define _GNU_SOURCE //for string.h
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

char *get_next_line(int fd)
{
	static char buf[BUFFER_SIZE];
	static int i = 0, r = 0;
	char *line;
	int j = 0;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		write(2, "Error: Invalid file descriptor or BUFFER_SIZE\n", 46);
		return (NULL);
	}
	if (!(line=malloc(10000)))
	{
		perror("Error");
		return (NULL);
	}
	while (1)
	{
		if (i >= r)
		{
			i = 0;
			r = read(fd, buf, BUFFER_SIZE);
			if (r <= 0)
			{
				if (r < 0)
				{
					perror("Error");
					return (NULL);
				}
				break ;
			}
		}
		line[j++] = buf[i++];
		if (line[j - 1] == '\n')
		break ;
	}
	if (j)
	{
	line[j] = 0;
	return (line);
	}
	else
	{
	free(line);
	return (NULL);
	}
}

void filter_line(char *line, char *target)
{
	const char *p = line;
	char *match;
	int t_len = strlen(target);

	while(*p)
	{
		if (!(match = memmem(p, strlen(p), target, t_len)))
		{
		write(1, p, strlen(p));
		return ;
		}
		else
		{
			write(1, p, match - p);
			int i = 0;
			while (i < t_len)
			{
				write(1, "*", 1);
				i++;
			}
			p = match + t_len;
		}
	}
}

int main(int params, char **argv)
{
	char *line;

	if (params != 2)
	{
		printf("USAGE: ./filter <target>");
		return (1);
	}
	while((line = get_next_line(0)))
	{
		filter_line(line, argv[1]);
		free(line);
	}
	return (0);
}
