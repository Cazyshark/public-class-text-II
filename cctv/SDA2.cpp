#include<iostream>
using namespace std;
class myclass {
         public:
                  
             myclass()
	    { ++i; }
	    static int i;                             
}; 
int myclass::i=0;   
int main()
{
 	 
           int *count=&myclass::i ;          
           myclass ob1,ob2,ob3,ob4;
	   cout<<"myclass::i="<<*count<<endl;   
                                                                              
	    return 0; } 

