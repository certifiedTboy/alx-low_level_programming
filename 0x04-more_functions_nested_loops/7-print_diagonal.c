#include "main.h"

/**
 * print_diagonal - prints the \ character n times
 * @n: number oftimes the \ charcater is to be printed
 */
void print_diagonal(int n)
{
int k;
if (n > 0)
{
for (k = 0; k < n; k++)
{
int a;
if (k > 0)
{
for (a = 0; a < k; a++)
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
