#include "main.h"

/**
 * Print alphabet from a - z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char chars;
for (chars = 'a'; chars <= 'z'; chars++)
{
_putchar(chars);
}
_putchar('\n');
}
