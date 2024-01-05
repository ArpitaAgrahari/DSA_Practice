#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int rotatedArray(int arr[],int size){
    int full[size];
    int fir[size/2];
    int sec[size/2];
    int i;
    for(int i = 0;i<size;++i){
        fir[i] = full[i];
    }
    for(int i =0 ;i<size;++i){
        sec[i-(size/2)] = full[i];
    }
    while(fir<=sec){
       
        swap(fir[size/2],sec[i-(size/2)]);
    }

}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    printArray(arr,6);
    rotatedArray(arr,6);
    cout<<"Rotated Array is:"<<rotatedArray(arr,6);
}