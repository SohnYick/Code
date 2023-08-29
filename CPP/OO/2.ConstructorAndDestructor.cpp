#include <iostream>

using namespace std;

class Person{

public:
		Person(){

				cout << "Constructor" << endl;
		}

		~Person(){
				cout << "Destructor" << endl;
		}
};


void fun(){

		Person p;
}

int main(){

		fun();

		return 0;
}
