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


// defining class and calling objects accordingly
// #include<iostream>
// #include<string>
// using namespace std;
// class myClass{
//     public:
//         int rollno;
//         string name;
// };

// int main(){
//      myClass Student;
//      Student.rollno = 3;
//      Student.name = "Arpita";
//      cout<<"Rollno: "<<Student.rollno<<endl;
//      cout<<"Name: "<<Student.name<<endl;
// }


//multiple calling of object in single class
// #include<iostream>
// using namespace std;
// class myclass{
//     public:
//         int id;
//         string name;
//         string state;
// };
// int main(){
//     //calling first object instance
//     myclass Arp1;
//     Arp1.id = 12218430;
//     Arp1.name = "Arpita";
//     Arp1.state = "UP";

//     //calling second object instance
//     myclass Har;
//     Har.id = 12294032;
//     Har.name ="Harshit";
//     Har.state = "Kanpur";

//     cout<<Arp1.id<<" "<<Arp1.name<<" "<<Arp1.state<<endl;
//     cout<<Har.id<<" "<<Har.name<<" "<<Har.state<<endl;

// }


//methods = methods are function inside class . 

//working and implementtation of methdos inside of class
// #include<iostream>
// using namespace std;
// class myclass{
//     public:
//         void myMethod(){
//             cout<<"Hello Arpita";
//         }
// };
// int main(){
//     myclass obj;
//     obj.myMethod();
// }

//implentation of method outside the class
// #include<iostream>
// using namespace std;
// class myclass{
//     public:
//         void myMethod();
// };
// void myclass::myMethod(){
//     cout<<"Hello Arpita";
// }
// int main(){
//     myclass obj;
//     obj.myMethod();
// }


//adding parameters to methods:'
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//         int ;
// };
// int Car::brand{
//     return brand;
// }
// int main(){
//     Car obj;
//     cout<<obj.brand("SUV");
// }


//constructor in cpp
//constructor is bsically automatically called whenever object of class is created.
// #include<iostream>
// using namespace std;
// class myclass{
//     public:
//         string name;
//         int id;
//         string state;
//             myclass(string x,int y,string z){   //this cpnstructor is defined inside the class
//                 name = x;
//                 id = y;
//                 state = z;
//             }
// };
// int main(){
//     myclass obj("Arpita",12218430,"UP");
//     cout<<obj.name<<" "<<obj.id<<" "<<obj.state<<endl;
// }


// #include<iostream>
// using namespace std;
// class myclass{
//     public:
//         string name;
//         int id;
//         string state;
//             myclass(string x,int y,string z);
// };
// myclass::myclass(string x,int y,string z){  //this constructor is defined otuside the class
//     name = x;
//     id = y;
//     state = z;
// }
// int main(){
//     myclass obj("Arpita",12218430,"UP");
//     cout<<obj.name<<" "<<obj.id<<" "<<obj.state<<endl;
// }


//In C++, there are three access specifiers:

//public - members are accessible from outside the class
 //private - members cannot be accessed (or viewed) from outside the class.
 //protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.


 //Note: By default, all members of a class are private if you don't specify an access specifier.




//Encapulsation:
//it means to make sure that "sensitive" data is hidden from users.
//to make it possible we use private access modifier

//if we want to modify private access modifiers then we can use getter or setter.
// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//         int salary;
//     public:
//     //working of setter  
//         void setsalary(int s){
//             salary = s;
//         }
//     //working of getter
//         int getsalary(){
//             return salary;
//         }
// };
// int main(){
//     Employee obj;
//     obj.setsalary(500000);
//     cout<<obj.getsalary();
// }



//example 2:
// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//         int age;
//     public:
//     //setter
//         void setAge(int a){
//             age = a;
//         }
//     //getter
//         int getAge(){
//             return age;
//         }
// };
// int main(){
//     Employee obj;
//     obj.setAge(32);
//     cout<<"Age : "<<obj.getAge()<<endl;
// }




//inheritance: to inherit attributes and methods from one class to another
//derived class (child) - the class that inherits from another class
// base class (parent) - the class being inherited from
// To inherit from a class, use the : symbol.

// #include<iostream>
// using namespace std;
// class Employee{
//     public:
//         string name = "Arpita";
//         int salary = 500000;
//             void age(){
//                 cout<<"confidential!!!"<<endl;
//             }
// };
// class Arpita:public Employee{
//     public:
//         string state = "Up";
// };
// int main(){
//     Employee obj;
//     obj.age();
//     cout<<obj.name<<" " <<obj.state;
// }

//multilevel inheritence

// #include<iostream>
// using namespace std;
// class myclass{
//     public:
//         void myfunction(){
//             cout<<"Hello"<<endl;
//         }
// };
// class mychild:public myclass{
// };

// class mygrandchild:public mychild{

// };

// int main(){
//     mygrandchild obj;
//     obj.myfunction();
//     return 0;
// }

//multiple inheritence
//A class can also be derived from more than one
// base class, using a comma-separated list

// #include<iostream>
// using namespace std;
// //first base class
// class Employee{
//     public:
//         void HR(){
//             cout<<"Hello"<<endl;
//         }
// };
// //other  base class
// class Employee2{
//     public:
//         void Senior(){
//             cout<<"Nameste";
//         }
// };
// //derived class
// class Arpita:public Employee,public Employee2{
// };
// int main(){
//     Arpita obj;
//     obj.HR();
//     obj.Senior();
//     return 0;
// }


//inheritence Access modifier
// #include<iostream>
// using namespace std;
// class Employee{
//     protected:
//         int salary;
// };
// class Programmer: public Employee{
//     public:
//         int bonus;
//         void setSalary(int s){
//             salary = s;
//         }
//         int getSalary(){
//             return salary;
//         }
// };
// int main(){
//     Programmer obj;
//     obj.setSalary(700000);
//     obj.bonus = 20000;
//     cout<<"Salary: "<<obj.getSalary()<<endl;
//     cout<<"Bonus: "<<obj.bonus<<endl;
// }

