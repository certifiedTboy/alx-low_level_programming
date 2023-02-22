#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */
int main(void)
{
long int fiba, fibb, a, b;
fiba = 1;
fibb = 2;
a = 0;
b = 0;
while (a <= 4000000)
{
a = fiba + fibb;
fiba = fibb;
fibb = a;
if ((fiba % 2) == 0)
{
b += fiba;
}
}
printf("%ld\n", b);
return (0);
}
