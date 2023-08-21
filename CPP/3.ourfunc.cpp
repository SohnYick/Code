#include <iostream>
void show(int);

int main(){
		using namespace std;

		int number;

		cout << "Please input a number:";
		cin >> number;
		show(number);

		return 0;
}

void show(int n){
		using namespace std;
		cout << "You have " << n << " money." << endl;
}
