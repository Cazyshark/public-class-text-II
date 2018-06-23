#include<iostream> 
using namespace std; 

class Point{ 
	int x,y; 
	public: 
		Point(){} 
		Point(int &a,int &b) 
			{ x=a; y=b; } 
		Point operator++(int){ 
			int a,b; 
			a=x++; b=y++; 
			cout<<"Point++ -> x="<<a<<",y="<<b<<endl; 
			return *this; 
		} 
		Point operator++(){ 
			int a,b; 
			a=++x; b=++y; 
			cout<<"++Point -> x="<<a<<",y="<<b<<endl; 
			return *this; 
		} 
		void show(){ 
			 cout<<"Now Point -> x="<<x<<",y="<<y<<endl;} 
}; 
int main(void) 
{ 
	int a,b; 
	cout<<"Input x y"<<endl; 
	cin>>a>>b; 
	Point obj(a,b); 
	obj++; 
	obj.show(); 
	++obj; 
	obj.show(); 
	return 0; 
} 
