#include<iostream>
using namespace std;
class magic
{
	public:
		void getdata(int a,int b) {
			first=a;
			step=b;
		}
		void setfirstmagic();
		int generate();
		int printmagic();
	private:
		int m[5][5];
		int step;
		int first;
		int sum;
};
void magic::setfirstmagic()
{
	int i;
	int j;
	for(i=0; i<=4; i++)
		for(j=0; j<=4; j++) {
			m[i][j]=first;
			first+=step;
		}
}
int magic::generate()
{
	int k;
	sum=m[0][0]+m[4][4];
	sum=m[0][0]+m[4][4];
	for(k=0; k<=4; k++) {
		m[k][k]=sum-m[k][k];
		m[k][4-k]=sum-m[k][4-k];
	}
	return 0;
}
int magic::printmagic()
{
	int i;
	int j;
	for(i=0; i<=4; i++) {
		for(j=0; j<=4; j++) {
			cout<<m[i][j]<<'\t';
		}
		cout<<endl<<endl;
	}
	return 0;
}
int main()
{
	int f,s;
	cout<<" 请输入初始魔方的起始值和相邻元素之间的差值： "<<endl;
	cin>>f>>s;

	magic m;
	m.getdata(f,s);
	m.setfirstmagic();
	cout<<" 初始矩阵为： "<<endl;
	m.printmagic();
	m.generate();
	cout<<" 生成矩阵为： "<<endl;
	m.printmagic();
	return 0;
}

