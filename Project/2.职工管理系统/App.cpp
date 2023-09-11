#include <iostream>
#include "GUI.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include "DB.h"

int main(){

	GUI ui;
	DB db;
	while(true){
		ui.showMenu();
		switch(ui.getChoice()){
			case 0:
			     ui.exitSystem();
			     break;
			case 1:
			     db.insert(new Employee(1,"Sohn"));		     
			     break;
			case 2:
			     break;
			default:
			     system("cls");
			     break;
		}
	}

	return 0;
}
