#include <iostream>
using namespace std;
const int MAX_LEN = 50;
template <class T>
class SET {
private:
		T elements[MAX_LEN];	// 定义元素集合,来记录SET中的元素
		int	N;	// 定义元素的实际个数
public:	
		SET();
	    SET(T data[], int n);
		SET(const SET &obj);
		~SET();
		int hasElement(T one);  //判断元素one是否在集合中
		void inputElement(T one); // 向集合中加入一个元素
		void delElement(T one);// 从集合中删除一个元素
		void showAllElements();  //显示集合中的所有元素
		// SET对象之间的运算：交、并、差，分别采用运算符重载实现
		SET operator+(const SET &obj);
		SET operator*(const SET &obj);
		SET operator-(const SET &obj);
		SET operator=(const SET &obj);
};

template <class T>
SET<T>::SET()
{
	for ( int i = 0; i < MAX_LEN; i++ )
		elements[i] = 0;
	N = 0;
}


template <class T>
SET<T>::SET( T data[], int n )
{
	for ( int i = 0; i < N; i++ )
		elements[i] = data[i];
	N = n;
}


template <class T>
SET<T>::SET( const SET &obj )
{
	for ( int i = 0; i < N; i++ )
		obj.elements[i] = elements[i];
	obj.N = N;
}


template <class T>
SET<T>::~SET()
{
	delete elements;
}


template <class T>
int SET<T>::hasElement( T one )
{
	for ( int i = 0; i < N; i++ )
		if ( elements[i] == one )
			return(1);
	return(0);
}


template <class T>
void SET<T>::inputElement( T one )
{
	T temp[MAX_LEN];
	if ( hasElement( one ) == 0 )
	{
		for ( int i = 0; i < N; i++ )
			temp[i] = elements[i];
		temp[N++] = one;
		delete elements;
		for ( int i = 0; i < N + 1; i++ )
			elements[i] = temp[i];
	}else return(0);
}


template <class T>
void SET<T>::delElement( T one )
{
	T temp[MAX_LEN];
	if ( hasElement( one ) == 1 )
	{
		for ( int i = 0; i < N; i++ )
		{
			temp[i] = elements[i];
		}
		for ( int i = 0; i < N; i++ )
		{
			for ( int j = i; j < N - 1; j++ )
				temp[j] = temp[j + 1];
		}
		delete elements;
		for ( int i = 0; i < N - 1; i++ )
			elements[i] = temp[i];
	}else return(0);
}


template <class T>
void SET<T>::showAllElements()
{
	for ( int i = 0; i < N; i++ )
		cout << elements[i] << " ";
	cout << endl;
}


template <class T>
SET<T> SET<T>::operator+( const SET &obj )
{
	SET temp( elements, N );
	for ( int i = 0; i < obj.N; i++ )
	{
		if ( temp.hasElement( obj.elements[i] ) == 1 )
			continue;
		else temp.inputElement( obj.elements[i] );
	}
	return(temp);
}


template <class T>
SET<T> SET<T>::operator*( const SET &obj )
{
	SET temp( elements, N );
	for ( int i = 0; i < obj.N; i++ )
	{
		if ( temp.hasElement( obj.elements[i] ) == 1 )
			temp.inputElement( obj.elements[i] );
		else continue;
	}
	return(temp);
}


template <class T>
SET<T> SET<T>::operator-( const SET &obj )
{
	SET temp( elements, N );
	for ( int i = 0; i < obj.N; i++ )
	{
		if ( temp.hasElement( obj.elements[i] ) == 0 )
			temp.inputElement( obj.elements[i] );
		else continue;
	}
	return(temp);
}


template <class T>
SET<T> SET<T>::operator=( const SET &obj )
{
	return(SET<T> ( obj.elements,obj.N ));
}


int main()
{
	int		a1[]	= { 1, 2, 3 };
	int		a2[]	= { 3, 4, 5 };
	SET <int>	s1( a1 ,3);
	SET <int>	s2( a2 ,3);
	SET <int>	s3, s4, s5;
	s3 = s1 + s2;
	s3.showAllElements();
	s4 = s1 * s2;
	s4.showAllElements();
	s5 = s1 - s2;
	s5.showAllElements();
	return(0);
}



