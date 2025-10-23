int main(){

	int i,j;
	int size1,size2;
	printf("Enter the size of the 1st array: ");
    scanf("%d", &size1);
    int array1[size1];
	printf("Enter elements of 1st array: ");
	
	for (i=0;i<size1;i++) {
        scanf("%d", &array1[i]);
    }
    printf("Enter the size of the 2nd array: ");
    scanf("%d", &size2);
    int array2[size2];
	printf("Enter elements of 2nd array: ");
	for (i=0;i<size2;i++) {
        scanf("%d", &array2[i]);
    }
    
	
	int inter[size1+size2];
	int k=0,l;
	
	for (i=0;i<size1;i++){
		int found =0;

		for (j=0;j<size2;j++){
		
			if (array1[i]==array2[j]){
				found=1;
				break;
			}
			
		}
		if (found){
			int check = 0;
            for (l = 0; l < k; l++) {
                if (inter[l] == array1[i]) {
                    check = 1;
                    break;
                }
            }
            if (!check) {
                inter[k++] = array1[i];
            }
		}
	}
	

	printf("Intersection: ");
    for (i = 0; i < k; i++) {
        printf("%d ", inter[i]);
    }
   
	return 0;
}
