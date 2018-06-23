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
{ cout<<" 衬 衣 \t 产 地 :"
<<place<<"\t 布 料 :"
<<material<<"\n 单 价 :"<<price<<"\t 数 量 :"
<<count<<"\t 总 价:"<<price*count<<endl;} 
void cap::print() 
{ cout<<" 帽 子 \t 产 地 :"
<<place<<"\t 布 料 :"<<material<<"\t 样 式 :"<<style<<"\n 单 价 :"<<price<<"\t 数 量:"<<count<<"\t 总价:"<<price*count<<endl;} 
void wardrobe::print() { cout<<" 立 柜 \t 产 地 :"<<place<<"\t 颜 色 :"<<color<<"\t 木 料 :"<<wood<<"\n 单 价 :"<<price<<"\t 数 量:"<<count<<"\t 总价:"<<price*count<<endl;} 
int main(void) 
{ 
shirt s("广州 ",55.8,20," 棉"); cap c("苏州 ",23.5,30," 帆布 ","A"); wardrobe w(" 福建 ",1200,10," 红色"," 樟木 "); string a; cout<<"有如下商品： "<<endl; 
s.print(); 
c.print(); 
w.print(); 
int temp; 
while(a!="0") 
{ 

cout<<" 输入相应物品进行相应操作（衬衣： s 帽子： c 立柜： w 结束： 0）"<<endl; cin>>a; 
if(a=="s"){ cout<<"+ 为入库 -为出库 ?为查询 ";cin>>a; if(a=="+"){cout<<" 入库数量： ";cin>>temp;s.in_something(temp);} if(a=="-"){cout<<" 出库数量： ";cin>>temp;s.out_something(temp);} 
if(a=="?")s.print(); 
} 
else if(a=="c"){ cout<<"+ 为入库 -为出库 ?为查询 ";cin>>a; if(a=="+"){cout<<" 入库数量： ";cin>>temp;c.in_something(temp);} if(a=="-"){cout<<" 出库数量： ";cin>>temp;c.out_something(temp);} 
if(a=="?")c.print(); 
} 
else if(a=="w"){ cout<<"+ 为入库 -为出库 ?为查询 ";cin>>a; if(a=="+"){cout<<" 入库数量： ";cin>>temp;w.in_something(temp);} if(a=="-"){cout<<" 出库数量： ";cin>>temp;w.out_something(temp);} if(a=="?")w.print(); 
} 
else if(a=="0"){s.print();c.print();w.print();} else cout<<"有误 重新"; 
} 
return 0; 
} 
