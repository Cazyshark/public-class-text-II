#include<iostream> 
using namespace std; 
const double PI=3.14; 

class Containner{ 
	public: 
		Containner(double a) 
		{	r=a; 
		} 
		virtual void area()=0; 
		virtual void volume()=0; 
		protected: 
		double r; 
}; 
class Sphere:public Containner{ 
	public: 
		Sphere(double a):Containner(a) {}
		 
		void area() {
			cout<<"Shpere's Aera="<<4*PI*r*r<<endl;
		} 
		void volume() {
			cout<<"Shpere's V olume="<<4/3*PI*r*r*r<<endl;
		} 
}; 
class Cylinder:public Containner{ 
	public: 
		Cylinder(double a,double b):Containner(a) 
			{h=b; } 
		void area() 
			{cout<<"Cylinder's Area="<<2*PI*r*(r+h)<<endl;} 
		void volume() 
			{cout<<"Cylinder's Volume="<<2*PI*r*h<<endl;} 
	private: 
		double h; 
 
}; 

int main(void) 
{ 
		Containner *ptr; 
		int r,h; 
		cout<<"Now Input Radius of Sphere :";cin>>r; 
		Sphere obj(r); 
		ptr=&obj; 
		ptr->area(); 
		ptr->volume(); 
		cout<<"Now Input Radius and Heights of Sphere :";
		cin>>r>>h; 
		Cylinder obj2(r,h); 
		ptr=&obj2; 
		ptr->area(); 
		ptr->volume(); 
		return 0; 
} 
