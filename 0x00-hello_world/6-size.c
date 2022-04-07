#include <stdio.h>

/**
 * main - outputs the size of data types
 * 
 * Return: 0 if there are no errors
 */
int main(void)
{
   printf("Size of a char: %i byte(s)", sizeof(char));
   printf("Size of a int: %i byte(s)", sizeof(int));
   printf("Size of a long: %i byte(s)", sizeof(long int));
   printf("Size of a long long int: %i byte(s)", sizeof(long long int));
   printf("Size of a float: %i byte(s)", sizeof(float));
   return (0);
}
