#pragma once
#include <fstream>
#include "Worker.h"

class DB{
	public:
		string dbPath;
		bool insert(Worker * Worker);
		Worker del(int ID);
		Worker search(int ID);
		Worker search(string name);
		bool update(int ID,string name,string role);
};
