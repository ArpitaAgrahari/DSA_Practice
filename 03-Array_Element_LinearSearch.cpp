#include<iostream>
using namespace std;

bool search(int arr[], int size,int key)
{
    for(int i = 0;i<size;i++){
        if(arr[i] == key){
        return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {10,5,9,-1,0,3,2,7,-22,1};
    cout<<"Enter the element you want to search is: "<< endl;
    
    int key;
    cin>>key;
    
    bool found = search(arr,10,key);
        if(found){
            cout<<"Keys is present"<<endl;
        }else{
            cout<<"Keys is not present"<<endl;
        }
    return 0;
}
