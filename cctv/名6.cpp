#include<iostream> 
#include<iomanip> 
#include<string> 
using namespace std; 

class TIME{ 
	int hour,minute,second; 
	public: 
		void choose() 
		{ 
			if(second==60){ 
						second=0; 
						minute++; 
			} 
			if(minute==60){ 
						minute=0; 
						hour++; 
			} 
			if(hour==24){ 
						hour=0; 
			} 
			if(second==-1){ 
						second=59; 
						minute--; 
			} 
			if(minute==-1){ 
						minute=59; 
						hour--; 
			} 
			if(hour==-1){ 
						hour=23; 
			} 
		} 
		void set() 
		{ 
			cout<<"Set Time Input Hour Minute Second :";
			cin>>hour>>minute>>second; 
			while(hour>23||hour<0) 
			{ cout<<"Bad Hour, Retry:";cin>>hour;} 
			while(minute>=60||minute<0) 
			{ cout<<"Bad Minute, Retry:";cin>>minute;} 
			while(second>=60||second<0) 
			{ cout<<"Bad Second, Retry:";cin>>second;} 
		} 
		TIME operator++() 
		{   cout<<"Run ++second"<<endl; 
			++second; 
			choose(); 
			return *this; 
		} 

		TIME operator++(int) 
		{ 
			cout<<"Run second++"<<endl; 
			second++; 
			choose(); 
			return *this; 
		} 
		TIME operator--() 
		{   cout<<"Run --second"<<endl; 
			--second; 
			choose(); 
			return *this; 
		} 
		TIME operator--(int) 
		{ 
			cout<<"Run second--"<<endl; 
			second--; 
			choose(); 
			return *this; 
		} 
		void print() 
		{ 
			cout<<"Now time:"; 
			cout<<setw(2)<<setfill('0')<<hour; 
			cout<<":"; 
			cout<<setw(2)<<setfill('0')<<minute; 
			cout<<":"; 
			cout<<setw(2)<<setfill('0')<<second<<endl; 
		} 
		~TIME(){}

}; 
int main(void) 
{ 
	TIME t; 
	t.set(); 
	string a; 
	cout<<"Input ++(--)time or time++(--) to change the time.\nInput 0 to quit."<<endl; 
	cout<<"or +/- to run ++/--second"<<endl; 
	cout<<"Input reset to set new time."<<endl; 
	while(a!="0") 
	{ 
		cout<<"Now Input:"; 
		cin>>a; 
		if(a=="time++") 
			{ t++; t.print();} 
		else if(a=="++time"||a=="+") 
			{ ++t; t.print();} 
		else if(a=="--time"||a=="-") 
			{ --t; t.print();} 
		else if(a=="time--") 
			{ t--; t.print();} 
		else if(a=="reset")t.set(); 
		else if(a=="0")break; 
		else 
			cout<<"Bad inputs, Retry:"; 
	} 
	return 0; 
} 
