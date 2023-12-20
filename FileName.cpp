#include <stdio.h> 
int main(void)
{
	int x, y;

	printf("frist number is=");
	scanf_s("%d", &x);
	printf("the second:");
	scanf_s("%d", &y);

	printf("the larger one is%d\n", (x > y) ? x : y);
	printf("the smallest one:%d", (x < y) ? x : y);

	return 0;
}