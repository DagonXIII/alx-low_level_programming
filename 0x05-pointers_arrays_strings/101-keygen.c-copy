#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 61

/**
* _keygen - generates random valid passwords for the program crackme
*
* Return: A integer
*/
int main(void)
{
	char password[PASSWORD_LEN];
	int i, r;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LEN - 1; i++)
	{
		r = rand() % 62;
		if (r < 10)
		{
			password[i] = '0' + r;
		}

		else if (r < 36)
		{
			password[i] = 'a' + r - 10;
		}

		else
		{
			password[i] = 'A' + r - 36;
		}

	}

	password[PASSWORD_LEN - 1] = '\0';

	printf("%s", password);

	return 0;
}

