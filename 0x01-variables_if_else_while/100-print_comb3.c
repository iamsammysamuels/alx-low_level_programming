#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, y;
i = 48;
y = 48;
while (y < 58)
{
i = 48;
while (i < 58)
{
if (y != i && y < i)
{
putchar(y);
putchar(i);
if (i == 57 && y == 56)
{
break;
}
putchar(',');
putchar(' ');
}
i++;
}
y++;
}
putchar('\n');
return (0);
}
