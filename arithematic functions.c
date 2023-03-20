#include <stdio.h> 
#include <stdlib.h>


int addition(int a, int b) 
{ 
	return a + b; 
}

int subtraction(int a, int b) 
{ 
	return a - b; 
} 

 
int multiplication(int a, int b) 
{ 
	return a * b; 
} 


int division(int a, int b) 
{ 
	if (b == 0) 
		return 0; 
	return a / b; 
} 

 
int main() 
{ 
	int a = 10, b = 5; 
	printf("Addition: %d\n", addition(a, b)); 
	printf("Subtraction: %d\n", subtraction(a, b)); 
	printf("Multiplication: %d\n", multiplication(a, b)); 
	printf("Division: %d\n",division(a,b));
	
	return 0;
}
