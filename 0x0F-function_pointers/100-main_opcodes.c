#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - function that takes the argument and prints opcodes
 * main - used to check the number of command-lin arguments
 * @num_bytes: number of bytes to print
 *
 */
void print_opcodes(int num_bytes)
{
	unsigned char *main_ptr = (unsigned char *)print_opcodes;

	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
	}
	printf("\n");
}
/**
 * main - function that takes two arguments, argc, argv
 * @argc: count of command-line arguments
 * @argv: array of strings that contain command-line arguments
 * Return: (0) upon successful execution
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");

		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}

