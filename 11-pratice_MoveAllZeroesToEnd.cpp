#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int shiftingZeroes(int arr[],int size){
    int j = 0;
    for(int i = 0;i<size;i++){
        if(arr[i] != 0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    return 0;
}
int main(){
    int arr[5] = {0,1,2,3,0};
    shiftingZeroes(arr,5);
    cout<<"Shifted Array: ";
    printArray(arr,5);
}