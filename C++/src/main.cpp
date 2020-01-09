#include <iostream>
#include <string>
using namespace std;

void test(int a)
{
	a = a * 2;
}

void test_pointer(int*p)
{
	
	*p = 10;
}
 
int main()
{
	int *q = new int;
	test_pointer(q);
	cout << "Value: " << *q << endl;

	delete q;
	return 0;
}