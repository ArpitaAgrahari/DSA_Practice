#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void sortingBubble(int arr[],int size){
    for(int i = 0;i<size;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[6] = {9,4,3,7,1,0};
    sortingBubble(arr,6);
    cout<<"Sorted Array: ";
    printArray(arr,6);
}