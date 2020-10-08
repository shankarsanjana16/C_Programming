#include <stdio.h>
int prime(int n, int t)
{
	if(n==t)
	{
		return 1;
	}
	if((n%t)==0)
	{
		return 0;
	}
	return prime(n,(t+1));
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if((n==0)||(n==1))
	{
		printf("%d is neither a prime number nor a composite number.",n);
	}
	else if(prime(n,2)==1)
	{
		printf("%d is a prime number.",n);
	}
	else
	{
		printf("%d is not a prime number.",n);
	}
	printf("\n");
}
