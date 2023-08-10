//Calcula el producto de dos números de forma recursiva. 
//Los números a multiplicar se leen por teclado.

#include<iostream>

using namespace std;
int product(int,int);

int main(){
	int n1,n2,p;
	cout<<"Introduce el numero";
	cin>>n1;
	cout<<"Introduce el segundo numero";
	cin>>n2;
	p = product(n1,n2);
	cout<<"El producto es:"<<p<< endl;
}
int product(int num1,int num2){
	if(num1==0 or num2==0){
		return 0;
	}else{
		return num1+product(num1,num2-1);
	}
	
}
