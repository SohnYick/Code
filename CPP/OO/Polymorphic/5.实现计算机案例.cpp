#include <iostream>

using namespace std;

class CPU{
		public:
				virtual void calculate() = 0;
};
class VideoCard{
		public:
				virtual void display() = 0;
};
class Memory{
		public:
				virtual void store() = 0;
};

class IntelCPU:public CPU{
		public:
				void calculate(){
						cout << "Intel cpu runing." << endl;
				}
};
class IntelVideoCard:public VideoCard{
		public:
				void display(){
						cout << "Intel VideoCard display." << endl;
				}
		
};
class KingstonMemory:public Memory{
		public:
				void store(){
						cout << "Kingston memory save data." << endl;
				}
};

class Computer{
		private:
				CPU * cpu;
				VideoCard * vc;
				Memory * m;
		public:
				Computer(CPU * cpu,VideoCard * vc,Memory * m){
						this->cpu = cpu;
						this->vc = vc;
						this->m = m;
				}
				void run(){
						this->cpu->calculate();
						this->vc->display();
						this->m->store();
				}
				~Computer(){
						if (cpu != NULL){
								delete cpu;
								cpu = NULL;
						}
						if(vc != NULL){
								delete vc;
								vc = NULL;
						}
						if(m != NULL){
								delete m;
								m=NULL;
						}
				}
};

int main(){

		Computer computer(new IntelCPU,new IntelVideoCard,new KingstonMemory);	
		computer.run();
		return 0;
}
