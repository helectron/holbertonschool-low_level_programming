#include <stdio.h>

/**
 *main - fibonacci until 50
 *
 *Return: 0 for success
 */

int main(void)

{
	long int p = 1;
	long int u = 2;
	long int i;

	printf("%lu", p);
	for (i = 1; i < 50; i++)
	{
		printf(", %lu", u);
		u += p; /* u = u + p */
		p = u - p; /* 1 = 2-1 */
	}
	printf("\n");
	return (0);
}
