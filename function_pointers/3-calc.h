#ifndef CALC_H
#define CALC_H

/**
 * struct op - Entry point
 * @op: operator
 * @f: function
 * Return: Always 0.
 */
typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

int (*get_op_func(char *))(int, int);

#endif
