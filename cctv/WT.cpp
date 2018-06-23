#include <iostream>
using namespace std;
template <class T>
T max_of_array(T a[], int len)
{
	int i;
	T m;
	m = a[0];
	for(i=1; i<len; i++)
	{
		if(m < a[i])
		{
			m = a[i];
		}
	}
	return m;
}
int main()
{
	int maxa,a[5]={1,4,3,2,5};
	float maxb,b[5]={5.2f,3.2f,4.2f,2.3f,3.1f};
	double maxc,c[5]={2.5,1.2,2.4,3.6,4.5};
	maxa = max_of_array(a,5);
	maxb = max_of_array(b,5);
	maxc = max_of_array(c,5);
	printf("%d\n%f\n%lf\n",maxa,maxb,maxc);
	return 0;
}
