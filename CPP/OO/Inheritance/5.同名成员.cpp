#include <iostream>
#include <string>
using namespace std;

class Fater{
public:
		string name;
		Fater(){
				name = "Fater";
		}
		void show(){
				cout <<  "Fater say Hello!" << endl;
		}
		void show(string info){
				cout << info << endl;
		}
};
class Son:public Fater{
public:
		string name;
		Son(){
				name = "Son";
		}
		void show(){
				cout << "Oh no." << endl;
		}
};
int main(){
		Son s;
		cout << s.name << endl;
		cout << s.Fater::name << endl;
		s.show();
		s.Fater::show();
		s.Fater::show("Into information.");

		return 0;
}
