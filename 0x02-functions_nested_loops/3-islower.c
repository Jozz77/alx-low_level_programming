#include <stdio.h>
#include "main.h"

/**
* _islower - Entry point
*
* @c: The character to be checked.
*
* Description: 'a function that checks for lowercase characters'
*
* Return: 1 if character is lowercase, 0 otherwise.
**/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

else
return (0);
}
