#include <stdio.h>
int main(){
	int array1[4]={1,2,3,4};
	int array2[4]={3,4,5,6};
	int size1=sizeof(array1)/sizeof(array1[0]);
	int size2=sizeof(array2)/sizeof(array2[0]);
	int u[size1+size2];
	int i,j;
	int k=0;
	
	for (i=0;i<size1;i++){
		int found =0;

		for (j=0;j<k;j++){
		
			if (u[j]==array1[i]){
				found=1;
				break;
			}
			
		}
		if (!found){
			u[k++]=array1[i];
		}
	}
	
	for (i=0;i<size2;i++){
		int found=0;
		for (j=0;j<k;j++){
			if (u[j]==array2[i]){
				found=1;
				break;
			}
		}
		if(!found){
			u[k++]=array2[i];
		}
	}
	printf("Union: ");
	for (i=0;i<k;i++){
		printf("%d ",u[i]);
	}
	
	return 0;
}
