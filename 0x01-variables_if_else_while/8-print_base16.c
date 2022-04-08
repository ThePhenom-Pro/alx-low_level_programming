#include <stdio.h>
/**
 * main - print the numbers of base 16
 * Return: 0 if the program is successful
 */
int main(void)
{
char n;
for (n = '0' ; n <= '9' ; n++)
putchar (n);
for (n = 'a' ; n <= 'f' ; n++)
putchar (n);
putchar ('\n');
return (0);
}
