#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all the single base 10 digits (0 - 9)
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
/* The loop goes while i < 10, and i increases by one every loop*/
for ( i = 0; i < 10; i++ )
{
printf( "%d\n", i );
}
return (0);
}