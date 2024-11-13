#include <stdio.h>
#include <string.h>

int main(){
	int total=0;
	char word1[20]="intention";
	char word2[20]="execution"; 
	char copy[20];
	int len1=strlen(word1);
	int len2=strlen(word2);
	char temp;
	int flag=0;
	int count=0;
	 for(int i=0;i<len1;i++){
	 	if(word1[i]!=word2[i]&&len2-1>=i){
	 		    
	 		   	if(word2[i]==word1[i+1]){
	 			printf("remove \'%c\' \n",word1[i]);
	 			total++;
	 		strncpy(copy,word2,i+1);
//	 			for(int j=0;j<len1;j++){
//	 				
//	 				if(word1[j]!=word1[i]&&j!=i){//t
//	 					copy[count]=word2[j];//execu
//	 					count++;
//	 					
//					 }
//					 if(word1[j]==word1[i]){
//					 	if(i==j){
//					 	copy[count]=word1[j+1];
//						 count++;	
//						 }else{
//						copy[count]=word1[j];
//	 					count++;
//						 }
//						
//	 					
//				}
//				 }
//				 printf("(%s)\n",copy);
				  }
		    else {
//		    	printf("%d",strlen(copy));
				
		    	if(strlen(copy)!=len1&&word1[i+1]==word2[i+1]){
	 		    	printf("Insert \'%c\' \n",word2[i]);
	 		    	for(int k=0;k<len2;k++){
	 		    		if(k==i){
	 		    			copy[k]=word2[i];
						 }
						 copy[k]=copy[k];
					 }total++;
//				 printf("(%s)\n",copy);
				 }else{
				 	printf("replace \'%c\' with \'%c\' \n",word1[i],word2[i]);
	 		total++;	
	 		copy[i]=word2[i];
//	 		printf("(%s)\n",copy);
				 }
			
			 }
		 }
		 if(i>len2-1&&word2[len2-1]!=word1[len2-1]){
			 	printf("remove \'%c\' \n",word1[i]);
			 	total++;
//			 	printf("(%s)\n",copy);
			 }
			
	 }
	 printf("%d",total);
	}