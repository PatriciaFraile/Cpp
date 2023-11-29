#include<iostream>

using namespace std;

int main(){
	int numero, factorial;
	cout<< "Write the whole numer";
	cin>>numero;
	factorial = 1;
	for(int i = 1 ; i<=numero ; i++){
		factorial = factorial*i;
		cout<<"The factorial is"<<":"<<factorial<<endl;
	}
	return 0;
		
		
}

