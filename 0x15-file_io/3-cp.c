#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

/**
 * error_exit - Prints an error message and exits
 * @msg: The error message to print.
 * @exit_code: The exit code to use.
 */
void error_exit(const char *msg, int exit_code)
{
	dprintf(2, "%s\n", msg);
	exit(exit_code);
}

/**
 * copy_file - Copies the content of one file to another.
 * @from_filename: The source filename.
 * @to_filename: The destination filename.
 */
void copy_file(const char *from_filename, const char *to_filename)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFSIZE];

	fd_from = open(from_filename, O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from source file", 98);

	fd_to = open(to_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit("Error: Can't write to destination file", 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit("Error: Can't write to destination file", 99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit("Error: Can't read from source file", 98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
		error_exit("Error: Can't close file descriptor", 100);
}

/**
 * main - Entry point. Copies a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	copy_file(argv[1], argv[2]);

	return (0);
}

