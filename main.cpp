#include <iostream>
using namespace std;

class MyClass
{
public:
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

int main()
{
	MyClass* m = new MyClass();
}