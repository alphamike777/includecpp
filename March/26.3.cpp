/* In c and C++, structure and classes goes same hand in hand 
In C we can declare only member var in struc
In c++ we can declare/define member var and func in class
Class : Class is nothing but collection of Member variable and functions in a one neat package 

Syntax : class class_name{
        //Access specifiers
        //Member variables
        //Memberfunctions

    *Access specifiers:
        1.Public: we can access public variable/functions(methods) anywhere in program
        2.Private : we can access private variables only inside of the class.
            Note:In c++ by default : private
        3.Protected: (Hierarchy necessary)
            We can access protected member var/methods only in it's derived class.

}
    * Object creation of class:
        class_name object1,object2,objectN;

*/
#include<iostream>
using namespace std;

class Demo
{
public:
    void Display(){
        cout<<"First cpp";
    }
};
void main(){
    Demo d;         //Object creation
    d.Display();
}