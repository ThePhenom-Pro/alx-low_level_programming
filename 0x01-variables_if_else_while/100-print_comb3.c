#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 * Return: 0 if the the output is successful
 */
int main(void)
{
int n;
int o = 0;

while (o < 10)
{
n = 0;
while (n < 10)
{
if (o != n && o < n)
{
putchar('0' + o);
putchar('0' + n);
if (n + o != 17)
{
putchar(',');
putchar(' ');
}
}
n++;
}
o++;
}
putchar('\n');
return (0);
}
