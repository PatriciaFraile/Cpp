//Factorial de un numero

#include<iostream>
using namespace std;
long double num(int);
int main(){
	int n;
	cout<<"Escribe un numero";
	cin>>n;
	cout<<"El factorial es"<<num(n)<<endl;
}
long double num(int n1){
	if(n1==0){
		return 1;
	}
	else{
		return n1*num(n1-1);
	}
	
}
