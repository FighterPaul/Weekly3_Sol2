#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()						//Problem 95, Solution 2, ID Student 65010902
{
	int num;
	scanf("%d", &num);

	int n = 0;

	do
	{
		if ((2 * n) == num)
		{
			printf("%d is an EVEN NUMBER", num);
			break;
		}
		if ((2 * n) + 1 == num)
		{
			printf("%d is a ODD number", num);
			break;
		}
		n++;
	}while ((2 * n) <= num);


		return 0;
}
	