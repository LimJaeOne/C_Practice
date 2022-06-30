#include <stdio.h>


int main(void)
{
	int i[] = { 10,20,30,40,50 };

	printf("i=%p", &i);
	printf("i+1=%p", &i);
	printf("i=%d", *i);
	printf("i=%d", *(i + 1));

}