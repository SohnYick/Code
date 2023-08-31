#include <iostream>
#include "GUI.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

int main(){

	GUI ui;
	Worker * worker = new Manager(1,"John");
	ui.showWorker(worker);

	int choice = 0;	
	while(true){
		ui.showMenu();
		cout << "请输入你的选择：";
		cin >> choice;
		switch(choice){
			case 0:
			     ui.exitSystem();
			     break;
			default:
			     system("cls");
			     break;
		}
	}

	return 0;
}
