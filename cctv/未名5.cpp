#include<iostream> 
#include<string> 
using namespace std; 
class base{ 
protected: 
string place; 
int count; 
double price; 
public: 
base(string pl,double pr,int c); 
void in_something(int add_cnt); 
void out_something(int del_cnt); 
}; 
class wardrobe:public base{ 
string color; 
string wood; 
public: 
wardrobe(string pl,double pr,int c,string co,string wo):base(pl,pr,c) 
{ color=co; wood=wo; } 
void print(); 
}; 
class shirt:public base{ 
protected: 
string material;  
public: 
shirt(string pl,double pr,int c,string ma):base(pl,pr,c) 
{ material=ma; } 
void print(); 
}; 
class cap:public shirt{ 
string style; 
public: 
cap(string pl,double pr,int c,string ma,string st):shirt(pl,pr,c,ma) 
{ style=st; } 
void print(); 
}; 
base::base(string pl,double pr,int c) 
{ place=pl; price=pr; count=c;} 
void base::in_something(int add_cnt) 
{ count+=add_cnt; } 
void base::out_something(int del_cnt) 
{ count-=del_cnt; 
if(count<0)count=0; 
} 
void shirt::print() 
{ cout<<" �� �� \t �� �� :"
<<place<<"\t �� �� :"
<<material<<"\n �� �� :"<<price<<"\t �� �� :"
<<count<<"\t �� ��:"<<price*count<<endl;} 
void cap::print() 
{ cout<<" ñ �� \t �� �� :"
<<place<<"\t �� �� :"<<material<<"\t �� ʽ :"<<style<<"\n �� �� :"<<price<<"\t �� ��:"<<count<<"\t �ܼ�:"<<price*count<<endl;} 
void wardrobe::print() { cout<<" �� �� \t �� �� :"<<place<<"\t �� ɫ :"<<color<<"\t ľ �� :"<<wood<<"\n �� �� :"<<price<<"\t �� ��:"<<count<<"\t �ܼ�:"<<price*count<<endl;} 
int main(void) 
{ 
shirt s("���� ",55.8,20," ��"); cap c("���� ",23.5,30," ���� ","A"); wardrobe w(" ���� ",1200,10," ��ɫ"," ��ľ "); string a; cout<<"��������Ʒ�� "<<endl; 
s.print(); 
c.print(); 
w.print(); 
int temp; 
while(a!="0") 
{ 

cout<<" ������Ӧ��Ʒ������Ӧ���������£� s ñ�ӣ� c ���� w ������ 0��"<<endl; cin>>a; 
if(a=="s"){ cout<<"+ Ϊ��� -Ϊ���� ?Ϊ��ѯ ";cin>>a; if(a=="+"){cout<<" ��������� ";cin>>temp;s.in_something(temp);} if(a=="-"){cout<<" ���������� ";cin>>temp;s.out_something(temp);} 
if(a=="?")s.print(); 
} 
else if(a=="c"){ cout<<"+ Ϊ��� -Ϊ���� ?Ϊ��ѯ ";cin>>a; if(a=="+"){cout<<" ��������� ";cin>>temp;c.in_something(temp);} if(a=="-"){cout<<" ���������� ";cin>>temp;c.out_something(temp);} 
if(a=="?")c.print(); 
} 
else if(a=="w"){ cout<<"+ Ϊ��� -Ϊ���� ?Ϊ��ѯ ";cin>>a; if(a=="+"){cout<<" ��������� ";cin>>temp;w.in_something(temp);} if(a=="-"){cout<<" ���������� ";cin>>temp;w.out_something(temp);} if(a=="?")w.print(); 
} 
else if(a=="0"){s.print();c.print();w.print();} else cout<<"���� ����"; 
} 
return 0; 
} 
