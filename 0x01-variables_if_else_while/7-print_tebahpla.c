#include <stdio.h>
/**
 * main - print the alphabet in reverse
 * Return: 0 if the program is successful
 */
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a' ; ch--)
putchar (ch);
putchar ('\n');
return (0);
}
