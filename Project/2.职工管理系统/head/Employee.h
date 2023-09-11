#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

class Employee:public Worker{
	public:
		Employee(int ID,string name);
};


