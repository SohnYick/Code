#include <iostream>

using namespace std;

class Person{

		public:
				int age;

				Person(){}

				Person(int age){

						this->age = age;
				}

				Person operator+(Person &p){
				
						Person rtPerson;
						
						rtPerson.age = this->age + p.age;

						return rtPerson;
				}
				
				Person operator+(int number){ 
						Person rtp;
						rtp.age = this->age + number;
						return rtp;
				}
};

ostream & operator<<(ostream &cout,Person p){

		cout << "Age is: " << p.age;

		return cout;
}

int main(){

		Person p1(10);
		Person p2(20);

		Person p3 = p1 + p2;

		cout << p3 << endl;
		cout << p3+18 << endl;
		return 0;
}
