#include <iostream> //tc of w case is n^2   tc of best case will be n, that is sorted, no passes

using namespace std;

void bubbleSort(int nums[], int size){
for(int i=0;i<size-1;i++){ //for the number of passes

    for (int j=0;j<size-1-i;j++){                  //for the number of comparisions, we've taken  n-i-1 because the last
                                                   //i elements are already in place
        if(nums[j]>nums[j+1]){
            int temp= nums[j];
            nums[j]= nums[j+1];
            nums[j+1]= temp;
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

    cout<<"the sorted array is: ";
    bubbleSort(arr, s);
    for (int n=0;n<s;n++){
        cout<<arr[n]<<" ";
    }
    return 0;
}
