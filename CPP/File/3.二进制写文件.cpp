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

		ofstream ofs("person.text",ios::out|ios::binary);	

		Person person = {"SohnYick",18};

		ofs.write((const char *)&person,sizeof(Person));

		ofs.close();

		return 0;

}
