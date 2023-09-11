#include "GUI.h"

GUI::GUI(){}
void GUI::showMenu(){
	cout << "*\t职员管理系统\t*" << endl;
	cout << "*\t1.显示所有\t*" << endl;
	cout << "*\t2.增加职工\t*" << endl;
	cout << "*\t3.删除职工\t*" << endl;
	cout << "*\t4.修改职工\t*" << endl;
	cout << "*\t5.查询职工\t*" << endl;
	cout << "*\t0.退出系统\t*" << endl;
}

int GUI::getChoice(){
	cout << "请输入你的选择：" ;
	int choice = 0;
	cin >> choice;	
	return choice;
}

void GUI::showWorker(Worker * worker){
	
	cout << "-----------" << endl;
	cout << "编号： " << worker -> ID <<endl;
	cout << "姓名： " << worker -> name << endl;
	cout << "职位： " << worker -> role << endl;
	cout << "-----------" << endl;

}
void GUI::exitSystem(){
	cout << "欢迎下次使用." << endl;	
	exit(0);
}
GUI::~GUI(){}
