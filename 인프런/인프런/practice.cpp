#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x,i;
	scanf("%d", &x);

	for (i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			printf("%d,", i);
		}
	}
}