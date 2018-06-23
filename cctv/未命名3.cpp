#include<iostream>
using namespace std;

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


