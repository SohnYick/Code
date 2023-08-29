#include <iostream>

using namespace std;

class Person{

public:
		static void increment(){

				count++;
		}
		static int count;

};
int Person::count = 0;


int main(){

		Person p;
		p.increment();

		Person p2;
		p.increment();

		cout << "count: " << Person::count << endl;

		return 0;
}
