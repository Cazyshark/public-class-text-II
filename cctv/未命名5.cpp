#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	public:
		Employee(long, char*, char*, double );
		Employee() {};
		~Employee() {};
		void set_id(long);
		void set_salary(double);
		void set_name(char * );
		void set_address(char* );
		long get_id();
		double get_salary();
		char* get_name();
		char* get_address();
		void print();
	private:
		long id;
		char *name;
		char *address;
		double salary;
};
Employee::Employee(long i,char* n,char* a,double s)
{
	id=i;
	name=new char[strlen(n)+1];
	strcpy(name,n);
	address=new char[strlen(a)+1];
	strcpy(address,a);
	salary=s;
}
void Employee::set_id(long i)
{
	id=i;
}
void Employee::set_salary(double s)
{
	salary=s;
}
void Employee::set_name(char* n)
{
	name=new char[strlen(n)+1];
	strcpy(name,n);
}
void Employee::set_address(char* a)
{
	address=new char[strlen(a)+1];
	strcpy(address,a);
}
long Employee::get_id()
{
	return id;
}
double Employee::get_salary()
{
	return salary;
}
char* Employee::get_name()
{
	return name;
}
char* Employee::get_address()
{
	return address;
}
void Employee::print()
{
	cout<<" ���� :"<<id
	    <<endl<<" ���� :"
	    <<name<<endl<<" ��ͥסַ :"
	    <<address<<endl<<" �� н:"
	    <<salary<<endl;
}
int main()
{
	long i;
	char n[10],a[20];
	double s;
	Employee g[2];
	cout<<"���������빤�ţ���������ͥסַ����н "<<endl;
	for(int y=0; y<=1; y++) {
		cin>>i>>n>>a>>s;
		g[y].set_id(i);
		g[y].set_name(n);
		g[y].set_address(a);
		g[y].set_salary(s);
		g[y].print();
	}
	return 0;
}
