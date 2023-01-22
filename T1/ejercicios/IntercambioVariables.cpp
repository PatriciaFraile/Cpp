//Intercambio de dos valores

#include<iostream>

using namespace std;

int main(){
	int n1,n2,aux;
	
	cout<<"Escribe un numero";
	cin>>n1;
	cout<<"Escribe el segundo numero";
	cin>>n2;
	
	aux = n1;
	n1 = n2;
	n2= aux;
	
	cout<<"\nEl valor de n1 es :"<<n1;
	cout<<"\nEl valor de n2 es :"<<n2;
	
	return 0;
}
