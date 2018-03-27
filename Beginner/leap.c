#include <stdio.h>
int a;
int main(void) {
	// your code goes here
	printf("\n Enter the year");
	scanf("%d",&a);
	if (a%4==0)
	{
		printf("%d is leap year",a);
	}
	else
	{
		printf("%d is not a leap year",a);
	}
	return 0;
}
