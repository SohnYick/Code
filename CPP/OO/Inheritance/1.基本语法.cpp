#include <iostream>

using namespace std;

class BasePage{
public:
	void pageTop(){
		cout << " public page top." << endl;
	}	
	void pageBottom(){
		cout << " public page bottom." << endl;
	}
};
class Cpp:public BasePage{
public:
		void pageContent(){
				cout << " page content:C++" << endl;
		}
};
class Java:public BasePage{
public:
		void pageContent(){
				cout << " page content:Java" << endl;
		}
};

void test(){
		Cpp c;
		c.pageTop();
		c.pageBottom();
		c.pageContent();
		cout << "++++++++++++++++++++++++" << endl;
		Java j;
		j.pageTop();
		j.pageBottom();
		j.pageContent();
}

int main(){
		test();
		return 0;
}
