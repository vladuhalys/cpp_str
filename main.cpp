#include <iostream>
using namespace std;

template<typename T>
T sum(T x, T y)
{
	return x + y;
}

int main()
{
	cout << sum(5, 5) << endl;
}