#include "main.h"

/**
 * main - Entry point. Copies the content of one file to another.
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 on success, exits with codes on failure.
 */
int main(int argc, char *argv[])
{
	check_args(argc);
	copy_file(argv[1], argv[2]);
	return (0);
}
