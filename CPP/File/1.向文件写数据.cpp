#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

		ofstream ofs;
		ofs.open("test.txt",ios::out);

		ofs << "Name:SohnYick" << endl;
		ofs << "Age:18" << endl;
		ofs << "Good bye" << endl;

		ofs.close();

		return 0;
}
