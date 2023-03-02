#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, i, j, sum;
	char *tmp, *result;

	/* Calculate lengths of input strings */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Check if result can fit in buffer */
	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	/* Allocate memory for temporary string */
	tmp = malloc((size_r + 1) * sizeof(char));
	if (tmp == NULL)
		return (0);

	/* Add digits from right to left */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;

		tmp[len1 - i - 1] = sum + '0';
	}

	/* Reverse the temporary string and copy to result buffer */
	result = r;
	for (i = len1 - 1, j = 0; i >= 0; i--, j++)
		result[j] = tmp[i];
	result[j] = '\0';

	/* Free temporary memory */
	free(tmp);

	return (result);
}
