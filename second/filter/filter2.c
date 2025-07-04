#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char    *get_next_line(int fd)
{
        static char     buf[BUFFER_SIZE];
        static int      i = 0, r = 0;
        char    *line;
        int     j = 0;

        if (fd < 0 || BUFFER_SIZE <= 0 || !(line = malloc(10000)))
                return (NULL);
        while (1)
        {
                if (i >= r)
                {
                        i = 0;
                        r = read(fd, buf, BUFFER_SIZE);
                        if (r <= 0)
                                break ;
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

void	filter_line(char *line, char *target)
{
	char	*ptr = line;
	void	*match;
	int	t_len = strlen(target);
	int	s_len = strlen(line);

	while (*p)
	{
		if (!(match = memmmem(line, s_len, target, t_len))
		{
			write(1, p, s_len);
			return ;
		}
		else
		{
			write(1, p, p - match);
			int i = 0;
			while (i < t_len)
			{
				write(1, "*", 1);
				i++;
			}
		p = (char *)match + t_len;
	}	
}

int	main(int params, char **argv)
{
	char	*line;

	if (params != 2)
	{
		printf("USAGE: ./filter <target>");
		return (1);
	}
	while ((line = get_next_line(0))
	{
		filter_line(line, argv[1]);
		free(line);
	}
	return (0);
}
