#include <unistd.h>   // for read, write
#include <string.h>   // for strlen, memmem
#include <stdlib.h>   // for exit
#include <stdio.h>    // for perror

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 64 // Or use whatever they define
#endif

void	filter_line(const char *line, const char *target)
{
	const char	*p = line;
	size_t		target_len = strlen(target);

	while (*p)
	{
		void *match = memmem(p, strlen(p), target, target_len);
		if (!match)
		{
			write(1, p, strlen(p)); // Print the rest if no match
			break;
		}
		// Print everything before the match
		write(1, p, (char *)match - p);
		// Print replacement ***
		write(1, "***", 3);
		// Move pointer past the matched word
		p = (char *)match + target_len;
	}
}

int	main(int argc, char **argv)
{
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	bytes_read;

	if (argc != 2)
	{
		write(2, "Usage: ./filter <target>\n", 26);
		return (1);
	}

	while ((bytes_read = read(0, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0'; // Null-terminate for memmem
		filter_line(buffer, argv[1]);
	}

	if (bytes_read == -1)
	{
		perror("read");
		return (1);
	}

	return (0);
}

