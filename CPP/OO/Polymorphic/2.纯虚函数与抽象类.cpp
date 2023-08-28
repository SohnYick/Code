#include <iostream>

using namespace std;

class Base{
public:
		virtual void show() = 0;
};

class Son:public Base{
public:
		virtual void show(){
				cout << "Son show()." << endl;
		}
};

int main(){
		
		Base * b = new Son;
		b -> show();

		return 0;
}
