#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(144);
    printf("%d\n", r);
    r = _sqrt_recursion(4);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    r = _sqrt_recursion(9);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(100);
    printf("%d\n", r);
    return (0);
}
