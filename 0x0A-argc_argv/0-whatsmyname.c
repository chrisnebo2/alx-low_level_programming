#include <stdio.h>
#include "main.h"

/**
 * main - Entry point accepts commandline arguements
 * @argc: Count of the number of commandline arguements
 * @argv: An array of pointers to each command line arguement
 * Return: (0) Success otherwise failure
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
