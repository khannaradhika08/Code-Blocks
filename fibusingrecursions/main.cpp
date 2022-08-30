#include <iostream>

using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}
int main()
{
    int a, i;
    cout<<"enter a number of your choice"<<endl;
    cin>>a;
    cout<<"the fibbonacci series is "<<endl;
    for(i=0;i<a; i++){
        cout<<fib(i)<<endl;
    }
    return 0;
}
