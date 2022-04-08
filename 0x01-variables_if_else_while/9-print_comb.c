#include <stdio.h>
/**
 * main - print comma separared values
 * Return: 0 if the program is successful
 */
int main(void)
{
int n;
for (n = 0 ; n <= 9 ; n++)
{
putchar (n + 48);
if (n == 9)
continue;
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
