#include <unistd.h>

/**
* main - Entry point
*
* Return: 1 (Error)
*/

int main(void)
{
    write(2, "and that pieceof art is useful\" - Dora Korpa, 2015-10-19\n", 59);
    return (1);
}