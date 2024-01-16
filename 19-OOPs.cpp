// #include<iostream>
// using namespace std;
// class Arpita{
//     public:
//     int Hello;
//     char Hello2;
//     float Hello3;
// };
// int main(){
//     Arpita A1;
//     Arpita A2;
//     Arpita A3;
//     cout<<"size: " <<sizeof(A1.Hello)<<endl;
//     cout<<"size: " <<sizeof(A2.Hello2)<<endl;
//     cout<<"size: " <<sizeof(A3.Hello3)<<endl;
//     return 0;
// }


//access modifier: public; => can be accessed anywhere in the program  
//                 private; => it is applied in default
//                 protected; => can be accessed in the class and the child class


// Getters and Setters in C++:
// Getter : It is a method that is used to get the value of variable which is private or to fetch data from private.
// Setter : It is a method that is used to set the conditions of private class fucntion .
// #include<iostream>
// using namespace std;
// class Hero{
//     private:
//     int Health;
//      public:
//      char level;
//      void print(){
//         cout<<level<<endl;
//      }
//      int getHealth(){
//          return health;
//      }
//      char getLevel(){
//          return level;
//      }
//      void setHealth(int h){
//          health = h;
//      }
//         void setLevel(char l){
//             level = ch;
//         }
// }
// int main(){
//     Hero ramesh;
//     cout<<"Health: "<<ramesh.getHealth()<<endl;
//     cout<<"Level: "<<ramesh.getLevel()<<endl;
//     ramesh.level = 'A';
//     ramesh.Health = 70;

//     cout<<"Health: "<<ramesh.getHealth()<<endl;
//     cout<<"Level: "<<ramesh.level<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class myClass{
//     public:
//     myClass(){
//         cout<<"Constructor declared.";
//     }
// };
// int main(){
//     myClass Arp;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Aru{
//     public:
//     Aru(){
//         cout<<"Harshit declared.";
//     }
// };
// int main(){
//     Aru arp;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// class Details{
//     public:
//         string name;
//         string gender;
//         int age;

//         Details(string x,string y,int z){
//             name = x;
//             gender = y;
//             age = z;
//         }
// };
// int main(){
//     Details Arp("Arpita","Female",20);
//     cout<<"Name: "<<Arp.name<<" Gender: "<<Arp.gender<<" Age: "<<Arp.age<<endl;
//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;
// class Shop{
//     public:
//         string name;
//         string products;
//         string brand;
//         int items;
//         Shop(string x,string y,string z, int a){
//             name = x;
//             products = y;
//             brand = z;
//             items = a;
//         }
// };
// int main(){
//     Shop myShop("Lovely","Sweets","Lovely",500);
//     cout<<"Shop name: "<<myShop.name<<" Products: "<<myShop.products<<" brand: "<<myShop.brand<<" items count: "<<myShop.items<<endl;
// }
