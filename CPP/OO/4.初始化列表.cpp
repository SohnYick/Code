#include <iostream>

using namespace std;

class Person{

		public:
				Person(int a,int b):pa(a),pb(b){
						cout << "constructor" << endl;
				}

				void show(){

						cout << pa << endl;
						cout << pb << endl;
				}

		private:
				int pb;
				int pa;

};

int main(){

		Person p(3,2);
		p.show();

		return 0;
}
