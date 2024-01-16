#include<iostream>
using namespace std;
class Arpita{
    public:
    int Hello;
    char Hello2;
    float Hello3;
};
int main(){
    Arpita A1;
    Arpita A2;
    Arpita A3;
    cout<<"size: " <<sizeof(A1.Hello)<<endl;
    cout<<"size: " <<sizeof(A2.Hello2)<<endl;
    cout<<"size: " <<sizeof(A3.Hello3)<<endl;
    return 0;
}