//Binary serach only in (monotonic function)
//works in ascending ooder cases or descending order cases.

#include<iostream>
using namespace std;
int binarySearching(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid] == key){
        return mid;
        }
        if(key>arr[mid]){
            start = mid+1;   
        }else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    // int key;
    // cout<<"Enter the key u want to print:";
    // cin>>key;

    int index = binarySearching(arr,5,2);
    cout<<"Index of key is:"<<index;
    return 0;
}
