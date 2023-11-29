//Calculate the product of two numbers of recursive form

#include<iostream>

using namespace std;
int product(int,int);

int main(){
	int n1,n2,p;
	cout<<"Write a number";
	cin>>n1;
	cout<<"Write the second number";
	cin>>n2;
	p = product(n1,n2);
	cout<<"The product is:"<<p<< endl;
}
int product(int num1,int num2){
	if(num1==0 or num2==0){
		return 0;
	}else{
		return num1+product(num1,num2-1);
	}
	
}
