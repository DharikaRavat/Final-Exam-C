#include<stdio.h>

   int num1, num2, num3;

   void swap() {
   	
   	num3 = num1;
   	num1 = num2;
   	num2 = num3;
   	
   	printf("After Swapping : num1 = %d, num2 = %d" , num1 ,num2);
   	
   }

int main () {
	
	printf("Enter the First number : ");
	scanf("%d" , &num1);
	
	printf("Enter the Second number : ");
	scanf("%d" , &num2);
	
	printf("Before Swapping : num1 = %d, num2 = %d\n" , num1 ,num2);
	
	swap ();
	
	return 0;
}