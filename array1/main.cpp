#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,4};
    int *p=a;
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;
    cout<<*p<<endl;
    cout<<(*p+1)<<endl;
    cout<<(*p+2)<<endl;
    cout<<(*p+3)<<endl;
    cout<<(*++p)<<endl;
    cout<<p<<endl;
    cout<<a<<endl;
    return 0;
}
