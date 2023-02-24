#include "main.h"

/**
 * more_numbers - prints 10X 0 - 14
 */
void more_numbers(void)
{
	int i = 0, k;
do {
for (k = 0; k < 15; k++)
{
if (k >= 10)
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
_putchar('\n');
i++;
} while (i < 10);
}
