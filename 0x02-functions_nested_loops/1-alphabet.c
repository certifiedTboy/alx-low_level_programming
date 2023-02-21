#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
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
