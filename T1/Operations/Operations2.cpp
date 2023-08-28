#include<iostream>
using namespace std;

int main(){
	int n1 , n2;
	double number;
	cout<<"Write the first number";
	cin>>n1;
	cout<<"Write the second number ";
	cin>>n2;
	
	if(n2==0){
		cout<<"Error number other than 0";
	}else{
		number = n1/n2;
		cout<<"The total is:"<<number;
				
	}
	return 0;
}
