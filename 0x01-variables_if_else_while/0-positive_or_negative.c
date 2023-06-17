#include<stdlib.h>
#include<time.h>
/**
 *main - Is the function to define the vlue of N
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - i RAND_MAX / 2;

	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else if (n < 0)
		printf("is negative");
	return (0);
}

