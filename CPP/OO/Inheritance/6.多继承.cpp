#include <iostream>

using namespace std;

class Fater1{
public:
		int money;
		Fater1(){
				money = 33;
		}
};
class Fater2{
public:
		int money;
		Fater2(){
				money = 100;
		}
};
class Son:public Fater1,public Fater2{
public:
		int money;
		Son(){
				this->money = this->Fater1::money + this->Fater2::money;
		}
};
int main(){
		Son s;
		cout << s.money << endl;
		return 0;
}
