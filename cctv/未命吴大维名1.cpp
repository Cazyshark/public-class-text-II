#include <iostream>
using namespace std;
 
class C {
public:	C() // ���캯��
		{	cout << "Constructing C object.\n";	}
		~C() // ��������
		{	cout << "Destructing C object.\n";	}
};
class BASE {
public:	BASE() // ���캯��Anon
		{	cout << "Constructing base object.\n";	}
		~BASE() // ��������
		{	cout << "Destructing base object.\n";	}
};
class DERIVED: public BASE {
		C 	mOBJ;
public:	DERIVED() // ���캯��
		{	cout << "Constructing derived object.\n";}
		~DERIVED() // ��������
		{	cout << "Destructing derived object.\n";	}
};

int main()
{	DERIVED obj;		// ����һ��������Ķ���
	return 0;
} 

