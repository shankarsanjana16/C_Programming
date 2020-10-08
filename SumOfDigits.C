#include <stdio.h>
int sum(int x, int s)
{
	if(x==0)
	{
		return s;
	}
	s+=(x%10);
	return sum((x/10),s);
}
int main()
{
	int x;
	printf("Input number: ");
	scanf("%d",&x);
	printf("Sum of digits: %d\n",sum(x,0));
}
