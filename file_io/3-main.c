#include "main.h"

/**
 * main - Copies file content using copy_file.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, or exits on failure.
 */
int main(int argc, char *argv[])
{
	check_args(argc);
	copy_file(argv[1], argv[2]);
	return (0);
}
