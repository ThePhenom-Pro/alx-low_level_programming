#include <stdio.h>
/**
 * main - print 0 to 9
 * Return: 0 if the program is successful
 */
int main(void)
{
int n;
for (n = 48 ; n <= 57 ; n++)
{
if ((n - 48) / 10 > 1)
break;
putchar (n);
}
putchar ('\n');
return (0);
}
