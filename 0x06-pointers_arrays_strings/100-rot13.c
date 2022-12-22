#include "main.h"

/**
 * rot13 - This function encodes a string using rot13.
 * @s: string parameter
 * Return: encoded string
 */

char *rot13(char *s)
{
  while (*s != '\n')
    {
      if ((*s >= 97 && *s <= 122) || (*s >= 65 && *s <= 90))
	{
	  if (*s > 109 || (*s > 77 && *s < 91))
	    {
	      *s -= 13;
	    }
	  else
	    {
	      *s += 13;
	    }
	}
      s++;
    }
  return (s);
}
