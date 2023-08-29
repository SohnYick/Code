#include <iostream>

using namespace std;

class Person{

		public:

				static int number;

};
int Person::number = 30;

int main(){

		Person p;
		cout << p.number << endl;
		p.number = 100;
		Person p2;
		cout << p2.number << endl;
		cout << Person::number;

		return 0;
}
