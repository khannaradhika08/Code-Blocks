#include <iostream>

using namespace std;

void swap(int*a, int*b){
int temp;
temp=*a;
*a=*b;
*b= temp;
}

int main(){
int x=4, y=5;
cout<<"the values after swapping is "<<x<<", "<<y<<endl;
swap(&x, &y);
cout<<"the values after swapping is "<<x<<", "<<y<<endl;
    return 0;
}
