#include <iostream> 
#include <fstream> 
using namespace std; 
const int COUNT=2; 
void bubble(int A[], int len) 
{ 
int tmp; 
int i,j; 
for(i=0;i<len-1;i++) 
{ 
	for(j=i+1;j<len;j++) 
		{ 
			if(A[j]<A[i]) 
			{ 
				tmp=A[j]; 
				A[j]=A[i]; 
				A[i]=tmp; 
			} 
		} 
} 
} 
int main(int argc, char *argv[]) 
{ 
	int number[2*COUNT]; 
	int tmpNumber[2*COUNT]; 
	int i; 
	cout<<"请输入 "<<2*COUNT<<" 个整数 :"; 
	for(i=0;i<2*COUNT;i++) 
{ 
cin>>number[i]; 
} 

fstream ioFile("E:\\f1.txt",ios::out); 
for(i=0;i<COUNT;i++) 
{ 
ioFile<<number[i]<<endl; 
} 
ioFile.close(); 
ioFile.open("E:\\f2.txt",ios::out); 
for(i=COUNT;i<2*COUNT;i++) 
{ 
ioFile<<number[i]<<endl; 
} 
ioFile.close(); 

ioFile.open("E:\\f2.txt",ios::in); 
for(i=0;i<2*COUNT;i++) 
{ 
ioFile>>tmpNumber[i]; 
} 
ioFile.close(); 
bubble(tmpNumber,2*COUNT); 


ioFile.open("E:\\f2.txt",ios::out); 
for(i=0;i<2*COUNT;i++) 
{ 
ioFile<<tmpNumber[i]<<endl; 
} 
ioFile.close(); 
return 0; 
} 
