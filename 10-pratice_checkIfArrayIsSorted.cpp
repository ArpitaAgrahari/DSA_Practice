#include<iostream>
using namespace std;
int ifSortedArray(int arr[],int size){
    for(int i = 0;i<size-1;i++){
        if(arr[i] < arr[i+1]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[4] = {100,20,1,8};
    ifSortedArray(arr,4);
    if(1){
        cout<<"Array is sorted.";
    }else{

// check if array is sorted
#include <iostream>
using namespace std;
int ifSortedArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }
        return 1;
}
int main()
{
    int arr[3] = {100,100,100};
    int a = ifSortedArray(arr, 3);
    if(a==1)    {
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
}
    }
}