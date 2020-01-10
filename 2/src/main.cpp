#include <iostream>
using namespace std;

int* create_array()
{
	int *a = new int[5];
	for(int i = 0; i < 5; i++)
	a[i] = i + 1;

	return a;
}

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	cout << a[i] << endl;
}

int main()
{
	int *a = create_array();
	print_array(a, 5);
	delete[] a;
}