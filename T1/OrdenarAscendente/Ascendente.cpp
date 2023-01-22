#include<iostream>
using namespace std;

int main(){
	int n1,n2, n3;
	
	cout<<"Escribe un numero";
	cin>>n1;
	
	cout<<"Escribe el segundo numero";
	cin>>n2;
	
	cout<<"Escribe el tercer numero";
	cin>>n3;
	
	if(n1 > n2)
       if( n2 > n3)
           cout << n3 << " " << n2 << " " << n1 << endl;
       else if(n1 > n3)
               cout << n2 << " " << n3 << " " << n1 << endl;
            else
               cout << n2 << " " << n1 << " " << n3 << endl;
    else if(n2 > n3)
            if(n1 > n3)
               cout << n3 << " " << n1 << " " << n2 << endl;
            else
               cout << n1 << " " << n3 << " " << n2 << endl;
         else
            cout << n1 << " " << n2 << " " << n3 << endl;
			
}
