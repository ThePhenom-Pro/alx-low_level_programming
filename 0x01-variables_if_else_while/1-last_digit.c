#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  prints the range on the last digit of a random number
* Return: 0 if the output is correct
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, n % 10);
if (n % 10 > 5)
printf(" and is greater than 5\n");
else if (n % 10 == 0)
printf(" and is zero\n");
else
printf(" and is less than 6 and not 0\n");
return (0);
}
