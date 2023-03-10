/**
 * _strncpy - Copies a string, using at most n bytes
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be used from src
 *
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
