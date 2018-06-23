#include<iostream>
using namespace std;
class Student
{
	public:
		Student(int );
		Student() {} ~Student() {}
		void account(int);
		static int sum();
		static double average();
		void print();
	private:
		int score;
		static int total_score;
		static int count;
};
Student::Student(int i)
{
	score=i;
}
void Student::account(int i)
{
	score=i;
	total_score+=i;
	count++;
}
int Student::sum()
{
	return total_score;
}
double Student::average()
{
	return total_score/count;
}
void Student::print()
{
	cout<<" 总 分 为 :"
	    <<sum()<<endl<<" 总 人 数 为 :"
	    <<count<<"\n 平 均 分 为:"
	    <<average()<<endl;
}
int Student::total_score=0;
int Student::count=0;
int main()
{
	Student a[5];
	int s;
	cout<<"请输入 5 个学生的成绩 \n";
	for(int i=0; i<=4; i++) {
		cin>>s;
		a[i].account(s);
	}
	a[0].print();
	return 0;
}
