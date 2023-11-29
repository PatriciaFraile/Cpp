#include<iostream>
using namespace std;

const string First = "Pablo";
const string Second = "Fernandez";

int main(){
	string firstName;
	string secondName;
	
	firstName = First + " "+Second;
	cout<<"The name in format first name - second name is : "<<firstName<<endl;
	
	secondName= Second + " " + First;
	cout<<"The name in format second name - first name is: "<<secondName<<endl;
	
	return 0;
}
