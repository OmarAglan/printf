#include "../include/main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Test cases for _printf
 *
 * Return: Always 0
 */
int main(void)
{
    int len1, len2;

    /* Test basic string */
    len1 = _printf("Simple test\n");
    len2 = printf("Simple test\n");
    printf("Length [_printf: %d, printf: %d]\n", len1, len2);

    /* Test characters */
    len1 = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    printf("Length [_printf: %d, printf: %d]\n", len1, len2);

    /* Test string */
    len1 = _printf("String:[%s]\n", "Hello World!");
    len2 = printf("String:[%s]\n", "Hello World!");
    printf("Length [_printf: %d, printf: %d]\n", len1, len2);

    /* Test numbers */
    len1 = _printf("Integers: [%d, %i]\n", 42, -42);
    len2 = printf("Integers: [%d, %i]\n", 42, -42);
    printf("Length [_printf: %d, printf: %d]\n", len1, len2);

    /* Test binary */
    len1 = _printf("Binary: [%b]\n", 98);
    printf("Length [_printf: %d]\n", len1);

    /* Test unsigned */
    len1 = _printf("Unsigned:[%u]\n", UINT_MAX);
    len2 = printf("Unsigned:[%u]\n", UINT_MAX);
    printf("Length [_printf: %d, printf: %d]\n", len1, len2);

    return (0);
}
