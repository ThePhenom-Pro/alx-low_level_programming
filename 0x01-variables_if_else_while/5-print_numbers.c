#include <stdio.h>
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
