#include <iostream>

using namespace std;

void insertionSort(int nums[], int size){
for(int i=1;i<size;i++){
        int key=nums[i];
        int j=i-1;

        while (j>=0 && nums[j]>key){

        nums[j+1]=nums[j];
        j=j-1;

    }
    nums[j+1]=key;
}
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

    cout<<endl<<"the sorted array is: ";
    insertionSort(arr, s);
    for (int n=0;n<s;n++){
        cout<<arr[n]<<" ";
    }
    return 0;
}
