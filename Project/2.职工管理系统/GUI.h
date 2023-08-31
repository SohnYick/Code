#pragma once
#include <iostream>
#include "Worker.h"

using namespace std;

class GUI{
	public:
		GUI();
		void showMenu();
		void showWorker(Worker * worker);
		void exitSystem();
		~GUI();
};
