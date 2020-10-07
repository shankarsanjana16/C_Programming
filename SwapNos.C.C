#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter the nos. a and b: ");
	scanf("%d%d",&a,&b);
	printf("Before Swap:\ta = %d\tb = %d\n",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After Swap:\ta = %d\tb = %d\n",a,b);
}