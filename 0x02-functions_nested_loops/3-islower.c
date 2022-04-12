#include "main.h"
/**
 * _islower - check if character is lower case
 * Return: if lowercase 1, otherwise 0
 */
int _islower(int c)
{
return ('a' <= c && c <= 'z' ? 1 : 0);
}
