#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int*b= &a;
    int**c=&b;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the value at b is "<<a<<endl;
    cout<<"the value of a is "<<*b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of b is " <<**c<<endl;
    return 0;
}
