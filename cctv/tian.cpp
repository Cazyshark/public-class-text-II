#include<iostream>
using namespace std;
class Time
{
	public:
		Time(int a=0,int b=0,int c=0) {
			hour=a;
			minute=b;
			second=c;
		}
		void setTime(int h,int m,int s) {
			hour=h;
			minute=m;
			second=s;
		} void setHour(int a) {
			if(a<24&&a>=0)
				hour=a;
		}
		void setMinute(int b)  {
			if(b<60&&b>=0)
				minute=b;
		} void setSecond(int c) {
			if(c<60&&c>=0)
				second=c;
		}
		int getHour() {
			return hour;
		}
		int getMinute() {
			return minute;
		}
		int getSecond() {
			return second;
		}
		void printUniversal() {
			cout<<"24 小 时 格 式 的 时 间 为 ："
			    <<getHour()<<":"<<getMinute()<<":"<<getSecond()<<endl;
		}
		void printStandard()  {
			if(hour>12) cout<<"12 小 时 格 式 的 时 间 为 ： "<<getHour()-12<<":"
				                <<getMinute()<<":"<<getSecond()<<"(pm)"<<endl;
			else
				cout<<"12 小 时 格 式 的 时 间 为 ："
				    <<getHour()<<":"<<getMinute()<<":"<<getSecond()<<"(am)"<<endl;
		}
	private:
		int hour; 
		int minute; 
		int second;  }; 
		int main() {
			int h1,m1,s1;
			int h2,m2,s2;
			int a;
			Time t1,t2;
			cout<<"请输入一个 24 小时格式的时间： "<<endl;
			cin>>h1>>m1>>s1;
			t1.setTime(h1,m1,s1);
			t1.printStandard();
			cout<<"请输入一个 12 小时格式的时间： (上午在最后用 1 表示，下午用 2 表示 )"<<endl;
			cin>>h2>>m2>>s2>>a;
			t2.setMinute(m2);
			t2.setSecond(s2);
			if(a==1)
				t2.setHour(h2);
			else
				t2.setHour(h2+12);
			t2.printUniversal();
			return 0;
		}
