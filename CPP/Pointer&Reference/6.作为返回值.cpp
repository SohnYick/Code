#include <iostream>

using namespace std;

int & fun(){

		int a = 10;
		int & ref = a;
		return ref;
}

int main(){
	
		int & ref = fun();

		cout << "fun() value " << ref << endl;	
		cout << "fun() value " << ref << endl;	
		cout << "fun() value " << ref << endl;	

		return 0;
}
