#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 15

int main(void)
{
	char password[PASSWORD_LEN + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LEN; i++)
	{
		int r = rand() % 62;
		if (r < 10)
		{
			password[i] = '0' + r;
		}

		else if (r < 36)
		{
			password[i] = 'a' + (r - 10);
		}

		else
		{
			password[i] = 'A' + (r - 36);
		}

	}

	printf("%s", password);
	return 0;
}

