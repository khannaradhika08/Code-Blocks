#include <iostream>

using namespace std;
struct Pair {
int min;
int max;
};

Pair getminmax(int arr[], int size){
struct Pair minmax;
 if(size==1){
    minmax.min=arr[0];
    minmax.max=arr[0];
    return minmax;
 }
 if(arr[0]>arr[1]){
    minmax.min=arr[1];
    minmax.max=arr[0];
 }
 else{
    minmax.min=arr[0];
    minmax.max=arr[1];
 }
 for(int i=2;i<size;i++){
    if(arr[i]>minmax.max){
        minmax.max=arr[i];
    }
    else if(arr[i]<minmax.min){
        minmax.min=arr[i];
    }
 }
 return minmax;
}
int main()
{
    int s;
    cout<<"enter the size: ";
    cin>>s;
    int arr[s];
    cout<<"enter the numbers: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    cout<<"the numbers are: ";
    for (int j=0;j<s;j++){
        cout<<arr[j]<<" ";
    }

    cout<<endl<<"the minimum and maximum numbers are: ";
    struct Pair minmax=getminmax(arr, s);
    cout<<endl<<"minimum: "<<minmax.min;
    cout<<endl<<"maximum: "<<minmax.max;

    return 0;
}
