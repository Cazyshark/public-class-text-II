#include <iostream>
using namespace std;
 
class C {
public:	C() // 构造函数
		{	cout << "Constructing C object.\n";	}
		~C() // 析构函数
		{	cout << "Destructing C object.\n";	}
};
class BASE {
public:	BASE() // 构造函数Anon
		{	cout << "Constructing base object.\n";	}
		~BASE() // 析构函数
		{	cout << "Destructing base object.\n";	}
};
class DERIVED: public BASE {
		C 	mOBJ;
public:	DERIVED() // 构造函数
		{	cout << "Constructing derived object.\n";}
		~DERIVED() // 析构函数
		{	cout << "Destructing derived object.\n";	}
};

int main()
{	DERIVED obj;		// 声明一个派生类的对象
	return 0;
} 

