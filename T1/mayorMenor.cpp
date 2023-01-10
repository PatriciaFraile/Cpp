//Determina si es mayor , menor

#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	int mayor,menor=0;
	
	cout<<"Escribe el primer numero";
	cin>>n1;
	cout<<"Escribe el segundo numero";
	cin>>n2;
	
	if(n1>n2){
		mayor = n1;
		menor = n2;
	}else{
		mayor = n2;
		menor = n1;
	}
	
	cout<<"El numero mayor es "<<mayor;
	cout<<"\nEl numero menor es "<<menor;

	
}
