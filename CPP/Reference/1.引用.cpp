#include <iostream>

using namespace std;

int main(){

		int a = 100;
		int & ref = a;
		cout << "ref value:" << ref << endl;
		ref = 200;
		cout << "a value:" << a << endl;

		return 0;
}
