#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int rotatedArray(int arr[],int size){
    int start = 0;
    int end = size-1;
    int temp1,temp2;
    int mid = (start+end)/2;
    while(start<=end){
        if(end<=mid){
            arr[mid] = temp1;
        }else if(end>=mid){
            arr[mid] = temp2;
        }
        swap(temp1,temp2);
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
}