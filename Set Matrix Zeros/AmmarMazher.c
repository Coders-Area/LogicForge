#include<stdio.h>
int main()
{
	int row,col;
	printf("Enter Number Of Rows And Columns: \n");
	scanf("%d%d",&row,&col);
	int matrix[row][col],row_find[10],col_find[10],k=0,l=0;
	printf("\nEnter Values: \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nOrignal Matrix Is: \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nUpdated Matrix Is: \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(matrix[i][j]==0)
			{
				row_find[k++]=i;
				col_find[l++]=j;
			}
		}
	}
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<row;j++)
		{
			matrix[j][col_find[i]]=0;
		}
		for(int j=0;j<col;j++)
		{
			matrix[row_find[i]][j]=0;
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
