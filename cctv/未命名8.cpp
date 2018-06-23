#include<iostream> 
using namespace std; 

class Point{ 
	int x,y; 
	public: 
		Point(){} 
		Point(int &a,int &b) 
		{ x=a,y=b; } 
		friend Point operator++(Point &c){ 
			int a,b; 
			a=++c.x; b=++c.y; 
			cout<<"-> x="<<a<<",y="<<b<<endl; 
			return c; 
		} 
		friend Point operator++(Point &c,int){ 
			int a,b; 
			a=c.x++;
			b=c.y++; 
			cout<<"-> x="<<a<<",y="<<b<<endl; 
			return c; 
		} 
		void show() 
		{ 
			cout<<"-> x="<<x<<",y="<<y<<endl; 
		} 
}; 

int main(void) 
{ 
	cout<<"x,y"<<endl; 
	int a,b; 
	cin>>a;cin>>b; 
	Point ob1(a,b); 
 
	cout<<"Point++";ob1++; 
	cout<<"Now Point "; 
	ob1.show(); 
	cout<<"++Point";++ob1; 
	cout<<"Now Point"; 
	ob1.show(); 
	return 0; 
}
