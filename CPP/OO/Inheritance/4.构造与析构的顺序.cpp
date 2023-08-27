#include <iostream>

using namespace std;

class Fater{
public:
		Fater(){
				cout << "Fater craete" << endl;
		}
		~Fater(){
				cout << "Fater die" << endl;
		}
};
class Son:public Fater{
public:
		Son(){
				cout << "Son create" << endl;
		
		}
		~Son(){
				cout << "Son die" << endl;
		}
};

int main(){
		Son s;
		return 0;
}
