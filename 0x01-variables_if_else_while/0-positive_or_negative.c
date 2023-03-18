#include <stdlib.h>
#include <time.h>
#include <stido.h>
/**
  * main - Entry point
  * Description: 'Check for number if it is positive or negagtive'
  * Return: always 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
