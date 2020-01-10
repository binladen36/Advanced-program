#include <iostream>
using namespace std;

int main()
{
	int b[5] = {1, 2, 3, 4, 5}; // create array in stack memory
	int *a = new int[5]; //create array in heap memory

	for (int i = 0; i < 5; i++)
	a[i] = b[i];

	
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}

	delete[] a; //delete array in heap memory
}