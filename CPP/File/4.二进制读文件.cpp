#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person{
		public:
				char name[64];
				int age;
};

int main(){

		ifstream ifs("person.txt",ios::in|ios::binary);

		if( !ifs.is_open() ){
				cout << "File open error!" << endl;		
				return 0;
		}

		Person p;
		ifs.read( (char*)&p,sizeof(Person));

		cout << "Name: " << p.name << endl;
		cout << "Age: " << p.age << endl;

		ifs.close();

		return 0;
}
