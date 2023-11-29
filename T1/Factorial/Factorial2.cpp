#include<iostream>
using namespace std;
long double num(int);
int main(){
	int n;
	cout<<"Write a number;
	cin>>n;
	cout<<"The factorial is"<<num(n)<<endl;
}
long double num(int n1){
	if(n1==0){
		return 1;
	}
	else{
		return n1*num(n1-1);
	}
	
}
