#pragma once
#include "Worker.h"
#include "DB.h"
#include "GUI.h"

class Service{
	public:
		void addWorker(Worker * worker);	
		void showAllWorker();
		void deleteWorker(int ID);
		void searchWorker(int ID);
		void searchWorker(string name);
		void updateWorker(Worker * worker);
	private:
		DB db;	
		GUI ui;

};
