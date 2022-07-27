#include <stdio.h>

/**
 * main-print number of arguments passed.
 * @argc:number of commandline arguments.
 * @argv:pointer to an array of commmand line arguments.
 * Return:0-success, non-zero-fail.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
