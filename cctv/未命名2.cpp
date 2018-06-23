#include<iostream>
#include<cmath>
using namespace std;
class Location
{
	public:
		Location(double a,double b) {
			x=a;
			y=b;
		} double Getx() {
			return x;
		} double Gety() {
			return y;
		} double distance1(Location&a) { // 成员函数，求两坐标点之间的距离
			double x1,y1;
			x1=a.Getx();
			y1=a.Gety();
			return sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
		} friend double distance2(Location&, Location&);
	private:
		double x,y;
};
double distance2(Location&a, Location&b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main()
{
	Location A(-11.2,-16.8);
	Location B(-5.5,8);
	double d1,d2;
	cout<<"A("<<A.Getx()<<","<<A.Gety()<<")"<<endl;
	cout<<"B("<<B.Getx()<<","<<B.Gety()<<")"<<endl;
	cout<<"用成员函数计算 "<<endl;
	d1=A.distance1(B);
	cout<<"Distance1="<<d1<<endl;
	cout<<"用友员函数计算 "<<endl;
	d2=distance2(A,B);
	cout<<"Distance2="<<d2<<endl;
	return 0;
}
