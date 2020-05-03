#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main
 * @argc: Holds the argument count
 * @argv: Holds the arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int i, len, ops = 0;
	char string[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk"; //This array is to be accessed constantly by the keygen to run the transformations by Fx's"
	char password[5];

	if (argc != 2)
		printf("Usage: ./keygen <Username>\n"), exit(1); //Not sure if necessary but at least gives a sensation of handled error
	len = strlen(argv[1]); //As seen by ltrace, the program utilices the lenght of the username to run some of it's transformations; also strlen is used to check if the password has the correct amount -6- of characters to it, before this strlen is executed.
	password[0] = string[(len ^ 59) & 63]; //Simply XOR and AND operations over the lenght, with 59 and 63 respectively - WORKING
	printf("%c\n", password[0]);
	for (i = 0; i < len; i++)
	{
		ops += argv[1][i]; //This is a loop through the username, addign each value and incrementing I
	}
	password[1] = string[(ops ^ 79) & 63]; //Again, XOR and AND with 85 and 63 over the result of the addition - WORKING
	printf("%c\n", password[1]);
	for (i = 0, ops = 1; i < len; i++)
		ops *= argv[1][i]; //Multiplication of the words againt each other
	password[2] = string[(ops ^ 85) & 63]; //XOR 85 and AND 63 for ops, as index for strings - WORKING
	printf("%c\n", password[2]);
	for (i = 0, ops = argv[1][0]; i < len; i++)
		if (ops <= argv[1][i])
			ops = argv[1][i];
	srand(ops ^ 14); //So, if my logic is not mistaken, this should always return the same once rand is called because of the same seed. - CONFIMED: Always the same if same seed
	password[3] = string[rand() & 63]; // AND on the result of the seeded rand call - SHould always be the same - CONFIRMED
	printf("%c\n", password[3]); // WORKING - F4 PASSED, failed on F5(0xa46)
	return (0);
}