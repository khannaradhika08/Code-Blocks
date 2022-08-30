#include <iostream>

using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n* fact(n-1);
    }
}
int main()
{
    int a, i;
    cout<<"enter a number of your choice"<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" will be "<<fact(a);
    return 0;
}
