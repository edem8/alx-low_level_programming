#include "3-calc.h"

/**
 * get_op_func - FUnction that gets the correct function
 * @s: operand parameter
 * Return: return a pointer to the corresponding operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == ops[i][0])
		{
			struct op new;

			new.(*f)(int a, int b) = ops[i][1];
		}
	}
	return (NULL);
}
