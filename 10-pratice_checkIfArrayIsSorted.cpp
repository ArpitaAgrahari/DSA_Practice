#include<iostream>
using namespace std;
int ifSortedArray(int arr[],int size){
    for(int i = 0;i<size-1;i++){
        if(arr[i] > arr[i+1]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[1] = {100};
    ifSortedArray(arr,1);
    if(1){
        cout<<"Array is sorted.";
    }else{
        cout<<"Array is not sorted.";
    }
}