#include <stdio.h>
void main73()
{
	int num , res ;
	printf("Enter a number :");
	scanf("%d",&num);
	res = num % 2;
	if (res == 0)
		printf("The number is Even");
	else
		printf("The number is Odd");
}
