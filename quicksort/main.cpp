#include <iostream>

using namespace std;

int partition(int nums[], int lb, int ub){

int pivot= nums[lb];
int start= lb+1;
int end=ub;
while(start<end){
while(start<=pivot){

        start++;
}
while(end>pivot){

        end--;
}
if(nums[start]<nums[end]){
    int temp=nums[start];
    nums[start]=nums[end];
    nums[end]=temp;
}
}
int t=nums[end];
nums[end]=pivot;
pivot=t;

return end;
}

void quicksort(int nums[], int lb, int ub){
    if(lb<ub){

            int loc=partition(nums,lb,ub);
            quicksort(nums,lb,loc-1);
            quicksort(nums,loc+1,ub);
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
    quicksort(arr, 0,s);
    for (int n=0;n<s;n++){
        cout<<arr[n]<<" ";
    }
    return 0;
}

