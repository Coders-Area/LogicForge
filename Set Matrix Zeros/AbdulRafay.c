#include <stdio.h>
int main(){
	int colarr[4],rowarr[4];
	int flag=0;
	int count=0;
	int arr[3][4]={{0,2,3,0},{1,1,3,7},{3,4,1,9}};	
	printf("\ntransformed\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(arr[i][j]==0){
				colarr[count]=j;
				rowarr[count]=i;
				count++;
			}
		}	
	}
	
	for(int i=0;i<count;i++){
	int col=colarr[i];
	int row=rowarr[i];
			for(int k=0;k<4;k++){
			arr[row][k]=0;
			arr[k][col]=0;
		}}
		for(int i=0;i<3;i++){
			for(int k=0;k<4;k++){
			printf(" %d ",arr[i][k]);
		}
		printf("\n");
		}
	

}
