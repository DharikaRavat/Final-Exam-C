#include<stdio.h>

int main () {
	
	int i, j, k;
	
	for (i=9; i>=1; i--) {
		for (k=0; k<=i; k++){
			printf("");
		}
		
		for(j=1; j<=i; j++){
			printf("*");
		}
		
		printf("\n");
		
	}
	
}