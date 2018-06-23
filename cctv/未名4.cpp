#include <iostream>
using namespace std;
class Base1
{
protected: 
	int data1; 
public:
	Base1(int a=8)
	{	data1 = a; 
		cout<<data1<<", Base Constructor1\n";
	}
	~Base1( )
	{	cout<<data1<<", Base Destructor1\n";	}
};
class Base2
{
protected:     
		int data2;
public:
	Base2(int a=9)
	{	data2 = a; 
		cout<<data2<<", Base Constructor2\n";
	}
	~Base2( )
	{	cout<<data2<<", Base Destructor2\n";	}
};
class Derived:public Base1, public Base2                       
{	int d;
	Base1  b1, b2;                      
public:
	Derived(int x, int y, int z) : Base1(x), Base2(y), b1(x+y), b2(x+z)                           
	{ 	d=z; cout<<"Derived Constructor\n";	}
	~Derived( )
	{ 	cout<<"Derived Destructor\n";	}
	void Show( )
	{	cout<<data1<<','<<data2<<','<<d<<endl;	}
};
int main( )
{	Derived  c(1, 2, 3);
	c.Show( );
	return 0;
}

