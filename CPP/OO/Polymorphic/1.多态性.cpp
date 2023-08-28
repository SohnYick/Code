#include <iostream>

using namespace std;

class Animal{
		public:
				virtual void speak(){
						cout << "Animal speak" << endl;
				}		
};
class Cat:public Animal{
		public:
				void speak(){
						cout << "Cat miao." << endl;
				}
};
class Dog:public Animal{
		public:
				void speak(){
						cout << "Dog wang." << endl;
				}
};

void doSpeak(Animal & animal){
		animal.speak();
}

int main(){
		Cat c;
		Dog d;
		doSpeak(c);
		doSpeak(d);
		return 0;
}
