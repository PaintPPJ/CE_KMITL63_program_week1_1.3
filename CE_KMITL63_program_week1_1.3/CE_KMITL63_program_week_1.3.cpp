#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, sum1 = 0, sum2 = 0, square_sum;
	for (i = 0; i <= 100; i++)
	{
		sum1 += pow(i, 2);
	}
	for (j = 0; j <= 100; j++)
	{
		sum2 += j;
	}
	square_sum = pow(sum2, 2);
	printf("%d", square_sum - sum1);
	return 0;
}