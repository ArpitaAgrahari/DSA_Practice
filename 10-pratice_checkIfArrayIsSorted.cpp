#include<iostream>
using namespace std;
int ifSortedArray(int arr[],int size){
    for(int i = 0;i<size-1;i++){
        if(arr[i]<arr[i+1]){
            cout<<"Array is sorted.";
        }else if(arr[i]>arr[i+1]){
            cout<<"Array is not sorted.";
        }
    }
    return 0;
}
int main(){
    int arr[1] = {100};
    ifSortedArray(arr,1);
}