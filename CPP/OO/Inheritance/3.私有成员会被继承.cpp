#include <iostream>

using namespace std;

class Fater{
		public:int a;
		protected: int b;
		private: int c;
};

class Son:public Fater{
		public:int d;	
};
int main(){
		cout << sizeof(Son) << endl;
		return 0;
}
