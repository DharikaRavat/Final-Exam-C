#include<stdio.h>

int main () {
	 
	 int time;
	 
	 printf("Enter The Time : ");
	 scanf("%d" ,&time);
	 
	 if (time<12) {
	 	printf("GOOD MORNING....");
	 }
	 
	 else if (time<16) {
	 		printf("GOOD AFTERNOON....");
	 }
	 
	 else if (time<21) {
	 		printf("GOOD EVENING....");
	 }
	 
	 else if (time<24) {
	 		printf("GOOD NIGHT...");
	 }
	 
	 else {
	 	printf("The Time is Not Correct...");
	 }
	 
	 return 0;
}