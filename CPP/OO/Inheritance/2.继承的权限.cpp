#include <iostream>

using namespace std;

class Fater{

		public: int a;
		protected: int b;
		private: int c;

};
class Son1:public Fater{
public:
		Son1(){
				a = 100;
				b = 100;
		}
};
class Son2:protected Fater{
public:
		Son2(){
				a = 200;
				b = 200;
		}
};
class Son3:private Fater{
public:
		Son3(){
				a = 300;
				b = 300;
		}
};

void test(){
		Son1 s1;
		Son2 s2;
		Son3 s3;

		s1.a;
		//s1.b; error
		//s1.c; error

		//s2.a; error
		//s2.b;
		//s2.c;

		//s3.a; error
		//s3.b;
		//s3.c;
}
int main(){

		test();

		return 0;
}
