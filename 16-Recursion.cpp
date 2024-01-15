//factorial uisng recursion

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n==0)  return 1;
//     int base_Problem  = factorial(n-1);
//     int Problem = n*base_Problem; 
//     return Problem;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = factorial(n);
//     cout<<ans<<endl;
// }

//Power of n of gievn integer

// #include<iostream>
// using namespace std;
// int power(int n){
//     if(n==0)  return 1;
//     int Base_case = power(n-1);
//     return 2*Base_case;
// }
// int main(){
//     int n;
//     cin>> n;
//     int ans = power(n);
//     cout<<ans<<endl;
// }

 
//counting

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0)  {
//         return ;
//     }
//     cout<<n<<endl;

//     print(n-1);

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     print(n);
// }


//steps count to reach home using stairs
#include<iostream>
using namespace std;
void reachHome(int src, int dest){

    if(src==dest){
        cout<<"Reached Home!!";
        return ;
    }
    src++;
    reachHome(src,dest);
      cout<<"source: "<< src<<"  Destination: "<<dest<<endl; 

}
int main(){
    int dest = 15;
    int src = 3;
    cout<<endl;
    reachHome(src,dest);
}