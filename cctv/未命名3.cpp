#include<iostream>
using namespace std;

template <class T>
class SET {
private:
		T elements[MAX_LEN];	// ����Ԫ�ؼ���,����¼SET�е�Ԫ��
		int	N;	// ����Ԫ�ص�ʵ�ʸ���
public:	
		SET();
	    SET(T data[], int n);
		SET(const SET &obj);
		~SET();
		int hasElement(T one);  //�ж�Ԫ��one�Ƿ��ڼ�����
		void inputElement(T one); // �򼯺��м���һ��Ԫ��
		void delElement(T one);// �Ӽ�����ɾ��һ��Ԫ��
		void showAllElements();  //��ʾ�����е�����Ԫ��
		// SET����֮������㣺����������ֱ�������������ʵ��
		SET operator+(const SET &obj);
		SET operator*(const SET &obj);
		SET operator-(const SET &obj);
		SET operator=(const SET &obj);
};


