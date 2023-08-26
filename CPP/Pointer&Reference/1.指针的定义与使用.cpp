#include <iostream>
int main(){
		
		int i = 10;
		int * p = &i;
		*p = 1000;

		std::cout << p << ":" << *p << std::endl;
		std::cout << i;

		return 0;
}
