#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len_1, len_2;
len_1 = _printf("%r\n", "Reverse it");
printf("String len: %d\n", len_1);
/* Test 1: NULL argument*/
len_2 = _printf("%r\n", NULL);
printf("String len: %d\n", len_2);
return (0);
}
