#include <stdlib.h>
#include <time.h>
#include <stido.h>
/**
 * main - Entry point
 * Description: 'Get the last digits of a number'
 * Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n \ 10;
	if (ld >5)
	{
		printf("last digit
	return (0);
}
