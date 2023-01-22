//Operaciones 

#include <iostream>
using namespace std;

int main(){
	int numero1, numero2, suma = 0 , resta = 0 , multiplicacion = 0 , division = 0;
	
	cout<<"Escribe un numero:"; 
	cin>>numero1;
	cout<<"Escribe el segundo numero"; 
	cin>>numero2;
	
	suma = numero1+numero2;
	resta = numero1-numero2;
	multiplicacion = numero1*numero2;
	division = numero1/numero2;
	
	cout<<"\nLa suma es: "<<suma;
	cout<<"\nLa resta es: "<<resta;
	cout<<"\nLa multiplicacion: "<<multiplicacion;
	cout<<"\nLa division es :"<<division;
	
	return 0;
}
