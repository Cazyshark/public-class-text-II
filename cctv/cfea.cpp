#include<iostream>

using namespace std;

class A{
	public:
		A(int a=20,int b=30){
			 c=a;
			 d=b;
		}
		A operator +(const A& other){
			c=c+other.c;
			return c;
		};
		A operator -(const A&othrer);
		void show(){
			cout<<c<<endl;
		}
	private:
		int c,d;
		
}; 
int main(){
	A q,w,e;
	q=w+e+q;
	
	q.show();
}

