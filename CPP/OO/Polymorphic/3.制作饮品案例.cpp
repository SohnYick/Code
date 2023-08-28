#include <iostream>

using namespace std;

class AbstructDrinking{
		public:
				virtual void boil(){
						cout << "Boil water." << endl;	
				}
				virtual void brew() = 0;
						
				virtual void pourInCup(){
						cout << "Pour in cup." << endl;
				}
				void make(){
						boil();
						brew();
						pourInCup();
				}
};

class Coffee:public AbstructDrinking{
		public:
				virtual void brew(){
						cout << "Add coffee." << endl;
				}
};
class Tea:public AbstructDrinking{
		public:
				virtual void brew(){
						cout << "Add tea." << endl;
				}
};

int main(){

		AbstructDrinking * ad = new Coffee;
		ad-> make();
		ad = new Tea;
		ad-> make();

		return 0;
}
