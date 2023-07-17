#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
@@ -13,18 +14,13 @@ int main(void)

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	}
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)

	{
		printf("Last digit of %d is %d and is %d", n, n, n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is less than 6 and not 0", n, n % 10);
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	return (0);
}
