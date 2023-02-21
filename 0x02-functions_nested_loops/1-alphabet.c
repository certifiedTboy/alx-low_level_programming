#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{
print_alphabet();
return (0);
}

void print_alphabet()
{
char chars;
for (chars = 'a'; chars <= 'z'; chars++)
{
_putchar(chars);
}
}
