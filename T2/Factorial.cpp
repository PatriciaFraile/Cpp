#include<iostream>

using namespace std;

int main(){
	int numero, factorial;
	cout<< "Escribe un numero entero";
	cin>>numero;
	factorial = 1;
	for(int i = 1 ; i<=numero ; i++){
		factorial = factorial*i;
		cout<<"El factorial es"<<":"<<factorial<<endl;
	}
	return 0;
		
		
}

