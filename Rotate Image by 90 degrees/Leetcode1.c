#include<stdio.h>
int Rotate(int matrix [][100],int n)
{	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			int temp = matrix [i][j];
			matrix [i][j] = matrix [i][n-j-1];
			matrix [i][n-j-1] = temp;
		}
	}

}

int main ()
{
		int n;
	
	printf("\nEnter the dimension of your matrix: ");
	scanf("%d",&n);
	
	int matrix[n][n]; 
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Enter values for row %d and coloumn %d ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	Rotate(matrix,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}