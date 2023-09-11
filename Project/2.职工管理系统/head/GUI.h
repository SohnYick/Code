#pragma once
#include "Worker.h"

using namespace std;

class GUI{
	public:
		GUI();
		void showMenu();
		void showWorker(Worker * worker);
		int getChoice();

		void exitSystem();
		~GUI();

		string information;
};
