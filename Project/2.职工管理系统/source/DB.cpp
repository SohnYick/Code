#include "DB.h"
#include "Boss.h"


DB(string dbPath="Database.txt"){
	this->dbPath = dbPath;
}
bool DB::insert(Worker * worker){

	ofstream ofs;
	ofs.open(dbPath,ios::out|ios::app);

	ofs << "ID:" << worker -> Id << "\t"
		<< "NAME:" << worker -> name << "\t"
		<< "ROLE:" << worker -> role << endl;
	ofs.close();	

	return true;
}
Worker DB::del(int ID){
	return new Boss(1,"Temp");
}
Worker DB::search(int ID){
	return new Boss(1,"Temp");
}
Worker DB::search(string name){
	return new Boss(1,"Temp");
}
bool DB::update(int ID,string name,string role){
	return true;
}
