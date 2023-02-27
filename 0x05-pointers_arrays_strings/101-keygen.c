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

	password[0] = 'T';
	password[1] = 'a';
	password[2] = 'd';
	password[3] = 'a';
	password[4] = '!';
	password[5] = 'C';
	password[6] = 'o';
	password[7] = 'n';
	password[8] = 'g';
	password[9] = 'r';
	password[10] = 'a';
	password[11] = 't';
	password[12] = 's';
	password[13] = '\n';
	password[14] = '\0';

	printf("%s", password);
	return 0;
}

