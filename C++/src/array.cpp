#include <iostream>
using namespace std;

int main(int  argc, char *argv[]){
    int a[5] ={1, 2, 3, 4, 5};
    int *p = a;

    cout <<"Address of a: " << a << endl;
    cout <<"Address of a[0]: " << &a[0] << endl;
    cout <<"Address of a[1]: " << &a[1] << endl;

    p +=2; //move p next 2 elements
    cout <<"Address of a[2]:" << p << endl;

    cout << "a[2] =" << *p << endl;

    p--;
    cout << "a[1] = " << *p << endl;
    
}