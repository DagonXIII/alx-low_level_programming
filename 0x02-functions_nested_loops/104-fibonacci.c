#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 0, b = 1, c = 0, d = 2;
	unsigned long int i, j, k;
	int x;

	printf("%lu, %lu, ", b, d);
	for (x = 2; x < 98; x++)
	{
		if (b + d > LARGEST || c > 0 || a > 0)
		{
			i = (b + d) / LARGEST;
			j = (b + d) % LARGEST;
			k = a + c + i;
			a = c, c = k;
			b = d, d = j;
			printf("%lu%010lu", c, d);
		}
		else
		{
			j = b + d;
			b = d, d = j;
			printf("%lu", d);
		}
		if (x != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
