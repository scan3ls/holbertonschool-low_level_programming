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
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	operator = get_op_func(argv[2]);

	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (operator)(num1, num2));

	return (0);
}
