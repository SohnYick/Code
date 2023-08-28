#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

		ifstream ifs;
		
		ifs.open("test.txt",ios::in);

		if( !ifs.is_open() ){
				cout << "File open error." << endl;	
				return 0;
		}

		string content;
		while(getline(ifs,content)){
				cout << content << endl;
		}
		

		ifs.close();

		return 0;
}
