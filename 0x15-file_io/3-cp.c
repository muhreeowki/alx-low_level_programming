#include "main.h"

int main(int argc, char **argv)
{
	int input, output, written, close_in, close_out, readlen = 1024;
	char *buffer = malloc(1024);

	if (argc != 3)
		handle_errors(97, "Usage: cp file_from file_to ", "");

	input = open(argv[1], O_RDONLY);
	if (input == -1)
		handle_errors(98, "1Error: Can't read from file ", argv[1]);

	output = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (output == -1)
		handle_errors(99, "Error: Can't write to ", argv[1]);

	while (readlen == 1024)
	{
		readlen = read(input, buffer, 1024);
		if (readlen == -1)
			handle_errors(98, "2Error: Can't read from file ", argv[1]);

		written = write(output, buffer, readlen);
		if (written == -1 || written != readlen)
			handle_errors(99, "Error: Can't write to ", argv[1]);
	}

	close_in = close(input);
	if (close_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input);
		exit(100);
	}

	close_out = close(output);
	if (close_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", output);
		exit(100);
	}

	free(buffer);
	return (1);
}


void handle_errors(int code, char *error, char *name)
{
	dprintf(STDERR_FILENO, "%s%s\n", error, name);
	exit(code);
}
