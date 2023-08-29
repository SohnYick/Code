#include <iostream>

using namespace std;

const double PI = 3.14;

class Circle{

		public:
				int radius;

				
				double round(){

						return 2 * PI * radius;
				}
};
		
				



int main(){

		Circle c;
		c.radius = 5;

		cout << "round: " << c.round() << endl;

		return 0;
}
