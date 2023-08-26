#include <iostream>

using namespace std;

int & fun(){

		static int a = 10;
		int & ref = a;

		return ref;
}

int main(){

		int & rvalue = fun();
		cout << "return value: " << rvalue << endl;

		fun() = 333;
		cout << "return value: " << rvalue << endl;

		
		
		return 0;
}
