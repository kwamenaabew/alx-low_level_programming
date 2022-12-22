#include "main.h"

/**
 * b10 - base 10 of a number
 * @n - number exponent
 * Return: 10 raised to n
 */

int b10(int n)
{
  int b = 10;

  while (n > 0)
    {
      b *= 10;
      n--;
    }
  return (b);
}

/**
 * print_number - prints out integers
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
  int r;

  r = b10(8);

  if (n < 0)
    {
      _putchar('-');
      n *= -1;
    }
  if (n == 0)
    {
      _putchar('0');
    }
  else
    {
      while (n / r == 0)
	{
	  r =/ 10;
	}
      while (r >= 1)
	{
	  _putchar((n / r) + '0');
	  
	  n %= r;
	  
	  r /= 10;
	}
    }
}
