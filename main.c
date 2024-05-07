#include "ft_printf.h"
#include <stdio.h>

int main() {
    // Ejemplos de uso de ft_printf
    ft_printf("Hello, world!\n");
    ft_printf("The answer is: %d\n", 42);
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello");
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Unsigned decimal: %u\n", 123456);
    ft_printf("Pointer address: %p\n", (void *)0x12345678);
    ft_printf("Integer: %d\n", 2147483647);
    ft_printf("Integer: %d\n", -2147483648);
    ft_printf("Unsigned integer: %u\n", 4294967295);
    ft_printf("Character: %c\n", '\0');
    ft_printf("String: %s\n", NULL);
    ft_printf("Hexadecimal: %x\n", 0);
    ft_printf("Pointer address: %p\n", (void *)0);

    // Usando printf estándar para comparar resultados
    printf("\n--- Results from printf ---\n");
    printf("Hello, world!\n");
    printf("The answer is: %d\n", 42);
    printf("Character: %c\n", 'A');
    printf("String: %s\n", "Hello");
    printf("Hexadecimal: %x\n", 255);
    printf("Unsigned decimal: %u\n", 123456);
    printf("Pointer address: %p\n", (void *)0x12345678);
    printf("Integer: %d\n", 2147483647);
    printf("Integer: %d\n", -2147483648);
    printf("Unsigned integer: %u\n", 4294967295);
    printf("Character: %c\n", '\0');
    printf("String: %s\n", NULL);
    printf("Hexadecimal: %x\n", 0);
    printf("Pointer address: %p\n", (void *)0);

    return 0;
}
