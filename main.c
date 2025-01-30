#include "include/main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int num = 42;
    _printf("Hello, %s!\n", "World");
    _printf("Number: %d\n", num);
    _printf("Binary: %b\n", num);
    _printf("Unsigned hex: %x\n", num);
    _printf("Address of num: %p\n", (void *)&num);
    
    return (0);
}
