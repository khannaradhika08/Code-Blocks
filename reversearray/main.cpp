#include <iostream>

using namespace std;

void reverseArray(int arr[], int start, int end){
if(start>=end)
    return;

else{
    int temp= arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
}

reverseArray(arr, start+1, end-1);

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

    cout<<endl<<"the reversed array is: ";
    reverseArray(arr, 0,s-1);
    for (int n=0;n<s;n++){
        cout<<arr[n]<<" ";
    }
    return 0;
}
