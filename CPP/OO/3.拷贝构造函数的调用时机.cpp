#include <iostream>
#include <string>

using namespace std;

class Person{
		
		public:

				string p_name;

				Person(){
						cout << "Constructor" << endl;
				}

				Person(string name){
						cout << "method()" << endl;
						p_name = name;
				}

				Person(const Person & p){
						cout << "Copy.." << endl;
						p_name = p.p_name;
				}
				~Person(){
						cout << "Destructor" << endl;
				}
				
};

// 使用已有对象初始化一个对象
void test1(){
		
		Person p("SohnYick");
		Person p2(p);

		cout << "p2 name" << p2.p_name << endl;
}
// 值传递的方式给函数传值
void test2_fun(Person p){
}
void test2(){
		Person p("SohnYick");
		test2_fun(p);
} 
// 值传递的方式，返回局部对象
Person test3_fun(){
		Person p("SohnYick");
		return p;
}
void test3(){
		cout << test3_fun().p_name << endl;	
}

int main(){

		// test1();
//		test2();
		test3();

		return 0;
}
