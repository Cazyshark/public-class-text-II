#include <iostream> 
#include <fstream>
#include <string.h>
using namespace std; 
const int MAX_LEN=20; 

struct Book{ 
	long id; 
	char name[MAX_LEN]; 
	char publisher[MAX_LEN]; 
	char author[MAX_LEN]; 
}; 

void addBookInfo(Book aBook) 
{ 
	ofstream outfile("e:\\book.dat",ios::app|ios::binary); 
		if(! outfile) 
			{ 
				cerr<<"open error!"<<endl; 


				abort(); 
} 
outfile.write((char*)&aBook,sizeof(Book)); 
outfile.close(); 
}
void selectBook(char namee[]) 
{ 
		Book aBook; 
			ifstream infile("e:\\book.dat",ios::binary); 
		if(! infile) 
{ 
cerr<<"open error!"<<endl; 
abort(); 
} 
cout<<"书号 \t"<<" 书名 \t"<<" 出版社 \t"<<" 作者 "<<endl; 
infile.read((char*)&aBook,sizeof(Book)); 
while(!infile.eof()){  
if(strcmp(namee,aBook.name)==0)
{ 
cout<<aBook.id<<"\t"<<aBook.name<<"\t"<<aBook.publisher<<"\t"<<aBook.author<<endl; 
} 
infile.read((char*)&aBook,sizeof(Book)); 
} 
infile.close(); 
} 
int main(int argc , char*argv[]){ 
Book aBook={2001, "Star", "yahoo", "Li Ming"}; 
Book bBook={2002, "Boold", "Sina", "Tom Berry"}; 
Book cBook={2003, "Star", "google", "Li Ming"}; 
addBookInfo(aBook); 
addBookInfo(bBook); 
addBookInfo(cBook); 
selectBook("Star"); 
return 0; 
} 
