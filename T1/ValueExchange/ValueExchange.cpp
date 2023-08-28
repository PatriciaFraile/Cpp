//Variable exchange

#include<iostream>

using namespace std;

int main(){
	int n1,n2,aux;
	
	cout<<"Write a number";
	cin>>n1;
	cout<<"Write a number";
	cin>>n2;
	
	aux = n1;
	n1 = n2;
	n2= aux;
	
	cout<<"\nThe value of  n1 is :"<<n1;
	cout<<"\nThe value of  n2 is :"<<n2;
	
	return 0;
}
