//Bigger or minor

#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	int bigger,minor=0;
	
	cout<<"Write a number";
	cin>>n1;
	cout<<"Write a number";
	cin>>n2;
	
	if(n1>n2){
		bigger = n1;
		minor = n2;
	}else{
		bigger = n2;
		minor = n1;
	}
	
	cout<<"The bigger number is"<<bigger;
	cout<<"\nThe minor number is "<<minor;

	
}
