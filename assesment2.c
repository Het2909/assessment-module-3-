#include<stdio.h>
int main()
{
	int sum[100][100],k,a[100][100],i,b[100][100],col,row,j;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	printf("Enter number of columns: ");
	scanf("%d",&col);
	
	printf("\n");
	printf("-------matrix A-------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element for(%d,%d): ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("-------matrix B-------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element for(%d,%d): ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=0;
			for(k=0;k<col;k++)
			{
				sum[i][j]=sum[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	printf("------MATRIX MULTIPLICATION------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
