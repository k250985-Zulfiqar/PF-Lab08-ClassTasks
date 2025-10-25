#include <stdio.h>
int main(){
	float arr[7][3];
	int i,j;
	float sum;
	
	for (i=0;i<7;i++){
		printf("Enter the Temperatures of Day %d, (Morning Afternoon Night): ",i);
		
		for (j=0;j<3;j++){
			scanf("%f",&arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\t Morning\tAfternoon\tNight\n");
	for(i=0;i<7;i++) {
        printf("%d\t",i+1);
        for(j=0;j<3;j++){
            printf("%.1f\t\t", arr[i][j]);
    	}
		printf("\n");
    }
    printf("\nAverage temperature:\n");
    for(i=0;i<7;i++) {
        sum = 0;
        for(j=0;j<3;j++){
            sum += arr[i][j];
    	}
        printf("Day %d = %.2f\n", i + 1, sum / 3);
    }

	return 0;
	
}
