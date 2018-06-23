#include<iostream> 
#include<math.h> 
using namespace std; 


void simple(int &a,int &b)
{ 
	int i,c; 
	c=abs(a)<abs(b)?abs(a):abs(b);
	for(i=2;i<=c;i++) 
		if(a%i==0&&b%i==0) 
			{ 
				a/=i; 
				b/=i; 
				i=2; 
			}
			 
		if(a<0&&b<0||a>0&&b<0){
				a=-a;b=-b;
				}
} 
class number{ 
	int x,y; 
	public: 
			number(int a,int b){ 
				 x=a; 
				 y=b; 
				 simple(x,y);
				 } 
			friend number operator+(number &a,number &b){ 
					number temp(0,0); 
					temp.y=a.y*b.y;
					temp.x=a.x*b.y+b.x*a.y; 
					simple(temp.x,temp.y); 
					return temp; 
                } 
			friend number operator-(number &a,number &b){ 
					number temp(0,0); 
					temp.y=b.y*a.y; 
					temp.x=a.x*b.y-b.x*a.y; 
				
				} 
			number operator*(number &a) 
				{ 
					x*=a.x; 
					y*=a.y; 
					simple(x,y); 
					return *this; 
				} 
			number operator/(number &a) 
 				{ 
					x*=a.y; 
					y*=a.x; 
					simple(x,y); 
					return *this; 
				} 
		
			 number operator-() { 
					x=-x; 
					y=y; 
					return *this; 
					} 
			number operator=(number& a) 
				{ 
					x=a.x; 
					y=a.y; 
					simple(x,y); 
					return *this; 
				
				}
				void print(){
				
			cout<<"Now a/b="<<x<<"/"<<y<<endl;} 
}; 


int main(void) 
{ 
		int x,y; 
		cout<<"Building Class a/b a=? b=?"<<endl;
		cin>>x>>y; 
		number a(x,y); 
		a.print(); 
		cout<<"Run a/b=-a/b"<<endl; 
		a=-a; 
		a.print(); 
		cout<<"Run a/b=x/y Now Input x=? y=?"<<endl;
		cin>>x>>y; number *p=new number(x,y);
		a=*p; 
		a.print(); 
		delete p; 
		cout<<"Run a/b+x/y Now Input x=? y=?"<<endl;
		cin>>x>>y; 
		number *q=new number(x,y); 
		a=(a+*q) ;
		a.print(); 
		delete q; 
		cout<<"Run a/b-x/y Now Input x=? y=?"<<endl;
		cin>>x>>y; 
		number *r=new number(x,y); 
		a-*r; 
		a.print(); 
		delete r; 
		cout<<"Run (a/b)*(x/y) Now Input x=? y=?"<<endl;
		cin>>x>>y; 
		number *s=new number(x,y); 
		a*(*s); 
		a.print(); 
		delete s; 
		cout<<"Run (a/b)/(x/y) Now Input x=? y=?"<<endl;
		cin>>x>>y; 
		number *t=new number(x,y); 
		a/(*t); 
		a.print(); 
		delete t; 
		return 0; 
} 
