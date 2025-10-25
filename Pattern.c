#include <stdio.h>
int main(){
	int i,j;
	char x='A';
	for (i=0;i<5;i++){
		for (j=0;j<i;j++){
			printf("%c",x);
			x++;
		}
		printf("\n");
	}
	return 0;
}
