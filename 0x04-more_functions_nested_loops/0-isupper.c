#include <stdio.h>

/**
* _isupper - checks if a character is uppercase.
* @c: The character needs to be checked.
*
* Return 1: if the character is uppercase, otherwise 0.
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
