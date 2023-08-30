#include <iostream>
#include "Manager.h"

int main(){

	Manager mg;
	int choice = 0;	
	while(true){
		mg.showMenu();
		cout << "请输入你的选择：";
		cin >> choice;
		switch(choice){
			case 0:
			     mg.exitSystem();
			     break;
			default:
			     system("cls");
			     break;
		}
	}

	return 0;
}
