#include <stdio.h>
int main()
{
	int a[3][3];
	printf("Input elements in the matrix:\n");
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			printf("element - [%d],[%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}