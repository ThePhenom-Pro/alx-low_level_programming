#include <stdio.h>
/**
 * main - print the alphabet
 * Return: 0 if the program is successful
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
putchar (ch);
for (ch = 'A' ; ch <= 'Z' ; ch++)
putchar (ch);
putchar ('\n');
return (0);
}
