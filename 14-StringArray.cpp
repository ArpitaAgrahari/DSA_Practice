#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[n--]);
        
    }
}
int getLength(char name[]){
    int count =0;
    for(int i =0;name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout<<"Enter ur name:";
    cin>>name;
    cout<<"Your name is ";
    cout<<name<<endl;
    int len = getLength(name);
    cout<<"The length of ur string is:";
    cout<<len<<endl;
    reverse(name,len);
    cout<<"The reverse of your string is: ";
    cout<<name<<endl;
}