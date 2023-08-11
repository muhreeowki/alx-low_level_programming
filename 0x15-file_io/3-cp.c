#include "main.h"

int main(int argc, char **argv)
{
	int input, output, written, close_in, close_out, readlen = 1024;
	char *buffer = malloc(1024);

	if (argc != 3)
		handle_errors(97, "Usage: cp file_from file_to ", "", 0);

	input = open(argv[1], O_RDONLY);
	if (input == -1)
		handle_errors(98, "Error: Can't read from file ", argv[1], 0);

	output = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (output == -1)
		handle_errors(99, "Error: Can't write to ", argv[2], 0);

	while (readlen == 1024)
	{
		readlen = read(input, buffer, 1024);
		if (readlen == -1)
			handle_errors(98, "Error: Can't read from file ", argv[1], 0);

		written = write(output, buffer, readlen);
		if (written == -1 || written != readlen)
			handle_errors(99, "Error: Can't write to ", argv[2], 0);
	}

	close_in = close(input);
	if (close_in == -1)
	{
		handle_errors(98, "Error: Can't close fd ", argv[1], input);
		exit(100);
	}

	close_out = close(output);
	if (close_out == -1)
	{
		handle_errors(98, "Error: Can't close fd ", argv[2], output);
		exit(100);
	}

	free(buffer);
	return (1);
}


void handle_errors(int code, char *error, char *name, int fd)
{
	if (fd > 0) 
		dprintf(STDERR_FILENO, "%s%d\n", error, fd);
	else
		dprintf(STDERR_FILENO, "%s%s\n", error, name);
	exit(code);
}
