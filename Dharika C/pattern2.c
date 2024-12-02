#include<stdio.h>

int main () {
	
	int j,k;
	
	
	for(k=j; k<=10; k++) {
     	for (j=1; j<=k; j++){
     		printf("  ");
		printf(" *");
	
	}
	  printf("  \n");
	}  
	
	
	
	for(k=9; k>=1; k--) {
     	for (j=0; j<k; j++){
     		printf("  ");
		printf(" *");
	
	}
	  printf("  \n");
	}   
}
	


