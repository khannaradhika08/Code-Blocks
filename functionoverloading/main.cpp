#include <iostream>

using namespace std;
int add(int a, int b, int c){
return a+b+c;
}
int add(int a, int b){
return a+b;
}
int main()
{

    int x,y,z;
    cout<<"the sum of 9 and 12 is "<<add(9,12)<<endl;
    cout<<"the sum of 9, 12 and 56 is "<<add(9,12,56)<<endl;
    return 0;
}
