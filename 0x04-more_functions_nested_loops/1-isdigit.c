#include <stdio.h>

/**
* _isdigit - Checks if a character is a digit.
* @c: The character needs to be checked.
*
* Return: 1 if the character is a digit, otherwise 0.
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
