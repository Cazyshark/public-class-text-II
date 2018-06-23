#include<iostream> 
using namespace std; 

class vehicle{ 
	public: 
	virtual void run(){
	
		cout<<"Vehicle run"<<endl;
	} 
	virtual void stop(){
		cout<<"Vehicle stop"<<endl;
	} 
}; 
class bicycle:virtual public vehicle{ 
	public: 
		void run() {
			cout<<"Bicycle run"<<endl;
		} 
		void stop() {
			cout<<"Bicycle stop"<<endl;
		} 
}; 
class motorcar:virtual public vehicle{ 
	public: 
		void run() {
			cout<<"Motorcar run"<<endl;
		} 
		void stop() {
			cout<<"Motorcar stop"<<endl;
		} 
}; 
class motorcycle:public bicycle,public motorcar{ 
	public: 
		void run(){
		
			cout<<"Motorcycle run"<<endl;
		} 
		void stop() {
			cout<<"Motorcycle stop"<<endl;
		} 
}; 
int main(void) 
{ 
		vehicle *ptr; 
		motorcar m_c; 
		bicycle b; 
		motorcycle m_cy; 
		ptr=&b; 
		ptr->run(); 
		ptr->stop(); 
		ptr=&m_c; 
		ptr->run(); 
		ptr->stop(); 
		ptr=&m_cy; 
		ptr->run(); 
		ptr->stop(); 
		return 0; 
} 

