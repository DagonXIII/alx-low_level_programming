#include<stdio.h>

/**
 * startupFunc - Apply the constructor attribute to startupFunc() so that it
 *   is executed before main()
 */
void startupFunc(void) __attribute__ ((constructor));

/**
 * startupFunc - implementation of startupFunc
 */
void startupFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
