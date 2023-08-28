//Operations 

#include <iostream>
using namespace std;

int main(){
	int num1, num2, sum = 0 , rest = 0 , multi = 0 , div = 0;
	
	cout<<"Write a number:"; 
	cin>>num1;
	cout<<"Write the second number"; 
	cin>>num2;
	
	sum = num1+num2;
	rest = num1-num2;
	multi = num1*num2;
	div = num1/num2;
	
	cout<<"\nThe addition is: "<<sum;
	cout<<"\nThe subtraction is: "<<rest;
	cout<<"\nThe multiplication is "<<multi;
	cout<<"\nThe division is:"<<div;
	
	return 0;
}
