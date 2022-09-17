#include <stdio.h>

/**
* main - Finds the largest prime factors of the number 612852475143
*.
* Return: Always 0.
*/

int main(void)
{
unsigned long prime = 612852475143;
unsigned long div = 2;
while (div < prime)
{
if (prime % div == 0)
{
prime /= div;
div = 2;
}
else
div++;
}
printf("%ld\n", prime);
return (0);
}
