//Write a function to find the factorial of a given number.The function should return the factorial of the number.

#include <iostream> 
using namespace std; 

unsigned int factorial(unsigned int n) 
{ 
	if(n == 0) 
		return 1; 
	int i = n, fact = 1; 
	while (n / i != n) { 
		fact = fact * i; 
		i--; 
	} 
	return fact; 
} 

int main() 
{ 
	int num = 5; 
	cout << "Factorial of "
		<< num << " is "
		<< factorial(num) << endl; 
	return 0; 
} 

