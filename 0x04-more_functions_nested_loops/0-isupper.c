#include "main.h"

/**
  * _isupper - Check if a letter is upper
  * @x: The number to be checked
  *
  * Return: 1 for upper letter or 0 for any else
  */
int _isupper(int i)
{
	if (i >= 65 && i <= 90)
	{
		return (1);
	}

	return (0);
}
