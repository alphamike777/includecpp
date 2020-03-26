/* Scope resolution operator :
    The operator which is used to define member var/method outside of the class which is declared inside of the class.
    Syntax :
        returntype class_name::function_name(parameter_list){
            //code
        }
*/
#include<iostream>
using namespace std;
class Demo
{
    int a,b;    //Global Var
public:
    void Read();    //Declaration
    void Display();
};  

void Demo :: Read(){  //Definition
    cout<<"\nEnter no: ";
    cin>>a>>b;
}
void Demo :: Display(){
    cout<<"\nAdd: "<<a+b<<"\nSub: "<<a-b;
}
void main(){
    Demo d;
    d.Read();
    d.Display();

}