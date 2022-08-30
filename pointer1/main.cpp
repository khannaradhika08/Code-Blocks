#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int* b= &a;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the value at b is "<<a<<endl;
    cout<<"the value of a is "<<*b<<endl;
    return 0;
}
