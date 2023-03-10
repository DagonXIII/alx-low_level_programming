/**
 * _strlen - computes the length of a string
 * @s: the string to compute the length of
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
  int len = 0;

  while (*s++)
    len++;

  return (len);
}
