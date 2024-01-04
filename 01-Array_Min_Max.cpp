#include<iostream>
#include<climits>
using namespace std;

int getMax(int num[],int n){
    int max = INT_MIN;

// int maxi = INT_MIN;

    for(int i = 0;i<n;i++){

// maxi = max(maxi,num[i]);


        if(num[i] > max){
            max = num[i];
        }
    }

// return maxi;

    return max;
}
int getMin(int num[],int n){
    int min = INT_MAX;

// int mini = INT_MAX;

    for(int i = 0;i<n;i++){

// another way: 
//     mini = min(mini,num[i]);

        if(num[i]<min){
            min = num[i];
        }
    }
    return min;

// return mini;

}
int main()
{
    int size;
    int num[100];
    cin>>size;
    for(int i = 0;i<size;i++){
        cin>>num[i];
    }
  cout<<"Maximum element in the array is " <<getMax(num,size)<<endl;
   cout<<"Minimum element in the array is " <<getMin(num,size)<<endl;
   return 0;
}