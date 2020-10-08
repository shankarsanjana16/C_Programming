#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of steps you need: ");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
}