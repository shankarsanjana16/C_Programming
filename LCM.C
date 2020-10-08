#include <stdio.h>
int hcf(int p, int q)
{
	if(q==0)
	{
		return p;
	}
	return hcf(q,(p%q));
}
int main()
{
	int a, b;
	printf("Input first number: ");
	scanf("%d",&a);
	printf("Input second number: ");
	scanf("%d",&b);
	printf("LCM of %d and %d = %d\n",a,b,((a*b)/hcf(a,b)));
}