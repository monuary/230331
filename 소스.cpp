//���߻���� ������ ����ϸ� �ȵȴ�. ������ �˾Ƶα� �ؾ��Ѵ�.

#include<iostream>
using namespace std;

class BaseOne 
{ 
public:void SimpleFuncOne() { cout << "BaseOne" << endl; } 
};

class BaseTwo
{
public:void SimpleFuncTwo() { cout << "BaseTwo" << endl; }
};

class MultiDerived :public BaseOne, protected BaseTwo	//BaseTwo�� protected���� ���ٰ���
{
public:
	void ComplexFunc()
	{
		SimpleFuncOne();
		SimpleFuncTwo();
	}
};

int main()
{
	MultiDerived mdr;
	mdr.ComplexFunc();
	return 0;
}