#include<stdio.h>

int main()
{
	int i,j,sum=0,a[3][3];

	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("enter a value of arr[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");

	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d ",a[i][j]);
			sum+=a[i][j];
		}
		printf("\n");
	}
		printf("sum =%d",sum);
		
	return 0;
}




