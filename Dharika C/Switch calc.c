#include<stdio.h>

  int num1, num2, Select;
  
  void Add() {
  	printf("Add for %d of %d is : %d\n", num1, num2, num1 + num2);
  }
  
  void Sub() {
  	printf("Sub for %d of %d is : %d\n", num1, num2, num1 - num2);
  }
  
  void Mul() {
  	printf("Mul for %d of %d is : %d\n", num1, num2, num1 * num2);
  }
  
  void Div() {
  	printf("Div for %d of %d is : %d\n", num1, num2, num1 / num2);
  }
  
  void in() {
  	printf("Invaild Choice.....");
  }
  
  
int main () {
	
	printf("1. Press 1 for + : \n");
	printf("2. Press 2 for - : \n");
	printf("3. Press 3 for * : \n");
	printf("4. Press 4 for / : \n");
	
	printf("Enter the your Choice : ");
	scanf("%d" ,&Select);
	
	printf("Enter the First Number : ");
	scanf("%d" ,&num1);
	
	printf("Enter the Second Number : ");
	scanf("%d" ,&num2);
	
	switch (Select) {
		
		case 1: {
		    Add ();
			break;
		}
		
		case 2: {
		    Sub ();
			break;
		}
		
		case 3: {
		    Mul ();
			break;
		}
		
		case 4: {
		    Div ();
			break;
		}
	    
	    default : {
			printf("Invaild choice...");
			break;
		}
	
    }
    
    	
}