#include<iostream>
using namespace std;
void merge(int *arr, int s,int e){
    itn mid =(s+e)/2;
    int len1 = mid - s+1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *sec = new int[len2];

    int mainArrayIndex =s;
    for(int  i=0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }
    for(int i=0;i<len2;i++){
        sec[i] = arr[mainArrayIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<len1 && index2 <len2){
        if(first[index] <sec[index]){
            arr[mainArrayIndex++] = first[index1++]; 
        }else{
            arr[mainArrayIndex++] = sec[index2++];
        }
    }
    while(index1 <len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 <len2){
        arr[mainArrayIndex++] = sec[index2++];
    }

}
int mergeSorting(int *arr,int s,int e){
    if(s>=e){
        return 0;
    }
    int mid = (s+e)/2;
    mergeSorting(arr,s,mid);
    merge(arr,mid+1,e);

}
int main(){
    int arr[6] = {9,3,5,1,8,0};
    int n = 6;
    mergeSorting(arr, 0, n-1);
    return 0;
}