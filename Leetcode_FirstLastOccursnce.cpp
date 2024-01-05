#include<iostream>
using namespace std;
int firstOccurance(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }else if(key>arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
 int lastOccurance(int arr[],int size,int key){
    start = 0;
     end = size-1;
     mid = (start+end)/2;
         while(start<=end){
         if(arr[mid] == key){
             ans = mid;
             end = mid+1;
         }else if(key>arr[mid]){
             start = mid+1;
         }else{
             end = mid-1;
         }
         mid = (start+end)/2;
     }
     return ans;
 }
int main(){
    int arr[6] = {1,2,2,2,3,4};
    cout<<"First Occurance of key is:"<<firstOccurance(arr,6,2);
    return 0;
}