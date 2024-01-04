#include<iostream>
using namespace std;
int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i] ;
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of Array:"<<sum(arr,n);
    return 0;
}