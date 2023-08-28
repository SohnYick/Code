#include <iostream>
#include <string>
using namespace std;

class Animal{
		public:
				Animal(){
						cout << "Create Animal Object." << endl;
				}
				virtual void speak() = 0;	
				
				virtual ~Animal() = 0;
};
Animal::~Animal(){
		cout << "Delete Animal." << endl;
}

class Cat:public Animal{
		public:
				string * name;
				Cat(string  name){
						this->name = new string(name);
						cout << "Create cat." << endl;
				}
				virtual void speak(){
						cout << *this->name << " speak..." << endl;
				}					
				virtual ~Cat(){
						if(this->name != NULL){
								delete this->name;
								this->name = NULL;
								cout << "Delete cat." << endl;
						}
				}
};

int main(){

		Animal * animal = new Cat("Tom");	
		animal->speak();
		delete animal;
		return 0;
}
