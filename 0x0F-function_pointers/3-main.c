#include "3-calc.h"

/**
 * main - preform simple calculations
 *@argc: argument count
 *@argv: argument array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (!((strcmp(argv[2], "/")) || !(strcmp(argv[2], "%"))) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (operator)(num1, num2));

	return (0);
}
