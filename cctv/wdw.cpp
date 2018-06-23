#include<iostream>
using namespace std;
 
	class exam{
	public:
	    void set_x(int n){ int d;cin>>d;x=d; }
	    int get_x(){ return x; }
        private:
	    int x;
	};
         main()
	{   exam ob[4];
	    int i;
	    for (i=0;i<4;i++) 
		ob[i].set_x(i);
	    for (i=0;i<4;i++) cout<<ob[i].get_x()<<" ";
            cout<<endl;
	    return 0;
            }    
	
