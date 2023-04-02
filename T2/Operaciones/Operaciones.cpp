#include<iostream>
using namespace std;

int main(){
	int n1 , n2;
	double numero;
	cout<<"Escribe el primer numero";
	cin>>n1;
	cout<<"Escribe el segundo numero";
	cin>>n2;
	
	if(n2==0){
		cout<<"Error número que no sea 0";
	}else{
		numero = n1/n2;
		cout<<"El total es:"<<numero;
				
	}
	return 0;
}
