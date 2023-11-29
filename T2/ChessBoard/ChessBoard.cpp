#include<iostream>
#include <string>
using namespace std;

const string black = "********";
const string white = "         ";

int main(){
	
	string blackRow;
	string whiteRow;
	
	blackRow = black + white + black + white + black +white +black + white;
	
	whiteRow = white + black + white + black + white + black + white + black;
	
	cout<<whiteRow<<endl;
	cout<<whiteRow<<endl;
	cout<<whiteRow<<endl;
	cout<<whiteRow<<endl;
	cout<<whiteRow<<endl;
	cout<<whiteRow<<endl;

	cout<<blackRow<<endl;
	cout<<blackRow<<endl;
	cout<<blackRow<<endl;
	cout<<blackRow<<endl;
	cout<<blackRow<<endl;
	cout<<blackRow<<endl;
	
	return 0;


	
	
}
