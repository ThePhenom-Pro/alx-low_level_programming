#include <stdio.h>
/**
 * main - print the alphabet twice
 * Return: 0 if the program is successful
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch == 'e' || ch == 'q')
continue;
putchar (ch);
}
putchar ('\n');
return (0);
}
