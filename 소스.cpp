//다중상속은 가급적 사용하면 안된다. 하지만 알아두긴 해야한다.

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

class MultiDerived :public BaseOne, protected BaseTwo	//BaseTwo의 protected까지 접근가능
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