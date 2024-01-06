#include<iostream>
using namespace std;
void selectionSorting(int arr,6){
     for(int i = 0;i<size-1;i++){
        int minIndex = 1;
        for(int j = i+1;j<size;i++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
     }
}
int main(){
    int arr[6] = {3,0,9,4,7,2};
    selectionSorting(arr,6);
}