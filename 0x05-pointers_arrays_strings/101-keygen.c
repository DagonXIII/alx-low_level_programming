#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 61

int main(void)
{
	char password[PASSWORD_LEN];
	int i;
	const char valid_chars[] = " !0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LEN - 1; i++)
	{
		password[i] = valid_chars[rand() % 62];
	}
	
	password[PASSWORD_LEN - 1] = '\0';

	printf("%s", password);

	return 0;
}
