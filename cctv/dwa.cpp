#include<iostream> 
#include<string.h> 
using namespace std; 
const int MAX_LEN=100; 

class EMPLOYEE{ 
	private: 
			long id; 
			char name[MAX_LEN]; 
			char department[MAX_LEN]; 
			int age; 
			double salary; 
	public: 
			EMPLOYEE(); 
			EMPLOYEE(const EMPLOYEE& obj); 
			EMPLOYEE(long idd, char namee[], char depar[], int agee, double sala); 
			~EMPLOYEE(); 
			void changeDepartment(char newDepar[]); 

			void changeAge(int agee); 
			void raiseSalary(double delta); 
			friend ostream& operator<<(ostream& stream, EMPLOYEE& obj); 
			friend istream& operator>>(istream& stream, EMPLOYEE& obj); 
}; 
	EMPLOYEE::EMPLOYEE() 
{ 
		id=000000; 
} 

	EMPLOYEE::EMPLOYEE(const EMPLOYEE& obj) 
{ 
			id=obj.id; 
			strcpy(name,obj.name); 
			strcpy(department,obj.department); 
			age=obj.age; 
			salary=obj.salary; 
} 
EMPLOYEE::EMPLOYEE(long idd, char namee[], char depar[], int agee, double sala) 
{ 
			id=idd; 
			strcpy(name,namee); 
			strcpy(department,depar); 
			age=agee; 
			salary=sala; 
} 
EMPLOYEE::~EMPLOYEE() 
{ 
} 
ostream& operator<<(ostream& stream, EMPLOYEE& obj) 
{ 
		stream<<"{ "<<obj.id<<",\""<<obj.name<<"\",\""; 
		stream<<obj.department<<"\","<<obj.age<<","<<obj.salary<<" } \n"; 
		return stream; 
} 
istream& operator>>(istream& stream, EMPLOYEE& obj) 
{ 
	cout<<" 输入 工号： "; stream>>obj.id;
		cout<<" 输入 姓名： "; 
 
	stream.ignore(1); 
	stream.getline(obj.name,MAX_LEN,'\n'); cout<<" 输入 部门： "; 
	stream.ignore(1); 
	stream.getline(obj.department,MAX_LEN,'\n'); 
	cout<<" 输入 年龄： "; 
	stream>>obj.age; cout<<" 输入 工资： "; 
	stream>>obj.salary; 
	return stream; 
} 

int main(int argc , char *argv[]) 
{ 
	EMPLOYEE A(200701, "Tom", "DEPARTMENT A",34,2345.6); 
	cout<<A; 
	EMPLOYEE B; 
	cin>>B; cout<<" 输入的信息： "<<B<<endl; 
	return 0; 
}
