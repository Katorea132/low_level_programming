#include <stdio.h>
/**
 * print_buffer	- Prints a buffer????
 * @b: points the buffer
 * @size: tells the size
 * Return: none
 */
void print_buffer(char *b, int size)
{
	int a, c;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%08x: ", a);
			for (c = 0; c < 10; c++)
			{
				if (c % 2 == 0 && c != 0)
					printf(" ");
				if ((c + 1) > size - 1)
				{
					printf("\t");
				}
				else
				{
					printf("%.2x", b[a + c]);
				}
			}
			printf(" ");
			for (c = 0; c < 10; c++)
			{
				if ((c + a) > size - 1)
					break;
				if (b[c + a] <= 31 || b[c + 1] >= '~')
					b[c + a] = '.';
				putchar(b[c + a]);
			}
			printf("\n");
		}
	}
}
