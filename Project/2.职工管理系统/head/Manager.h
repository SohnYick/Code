#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

class Manager:public Worker{
	public:
		Manager(int ID,string name);
};


