#include<iostream>
using namespace std;

template <class TYPE>

void bubble (TYPE A[], int len)                                 //��ð�ݷ���С��������
{
	int temp=len;
	int n=temp;
	
	for(int i=1;i<n;i++)
	{	for(int j=n-1;j>=i;j--)
			if(A[j-1]>A[j])
			{
				temp=A[j-1];
				A[j-1]=A[j];
				A[j]=temp;
			}
			
	}
	for(int m=0;m<n;m++)
		cout<<A[m]<<" ";
	cout<<endl;
}

int main()
{
	int a[]={55,44,33,22,11,5,4,3,2,1};
	double b[]={1.2,1.3,2.2,3.3,4.4,5.5,7.7,8.8,9.3,2.6};
	cout<<"�����aԭ˳��Ϊ��"<<endl;
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	cout<<"������������aΪ��";
	bubble(a,10);
    cout<<"�����bԭ˳��Ϊ��"<<endl;
	for(int j=0;j<10;j++)
		cout<<b[j]<<" ";
	cout<<endl;
	cout<<"�������������bΪ��";
	bubble(b,10.0);
	 return 0;
}

