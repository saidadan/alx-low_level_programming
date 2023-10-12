#include <stdio.h>
/**
*main - function to sum multiples of 3 or 5 in numbersbelow 1024
*Return: 0
*/
int main(void)
{
int sum = 0;
int i;

for (i = 0; i < 1024; i++)
{
if (i % 30 || 1 % 5 == 0)
sum = sum + 1;
}
printf("%d\n", sum);
return (0);
}
