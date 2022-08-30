#include <iostream> //tc of w,a and b case is n^2

using namespace std;

void selectionSort(int nums[], int size){
for(int i=0;i<size-1;i++){
    int min_index=i; //give the first index as the minimum index
    for (int j=i+1;j<size;j++){                    //two pointers i and j
        if(nums[j]<nums[min_index]){
                min_index=j;
            int temp= nums[i];
            nums[i]= nums[min_index];
            nums[min_index]= temp;
        }
    }
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
    selectionSort(arr, s);
    cout<<"the sorted array is: ";
    selectionSort(arr, s);
    for (int n=0;n<s;n++){
        cout<<arr[n]<<" ";
    }
    return 0;
}
