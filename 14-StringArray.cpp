#include<iostream>
using namespace std;

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

    cout<<"The length of ur string is:";
    cout<<getLength(name)<<endl;

}