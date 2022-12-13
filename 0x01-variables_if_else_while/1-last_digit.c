#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - Entry point
*
* Return: Always 0 (successs)
*
*/

int main(void)

{

	int n; n lastNum

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = % 10;
	if (lastNum > 5)
		printf("last digit of %d is %d and is greater than 5\n", n lastNum);
	else if (lastNum == 0)
		printf("last digit of %d is %d and is zero\n", n lastNum);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n lastNum);
	return (0);
}
