#include <iostream>

using namespace std;

class Person{

		public:
				int age;
				Person(int age){
						this->age = age;
				}

				Person& addAge(int age){
						this->age += age;	
						return *this;
				}
};

int main(){
		
		Person p(23);
		p.addAge(10).addAge(5).addAge(15);
		cout << "Age is: " << p.age;

		return 0;
}
