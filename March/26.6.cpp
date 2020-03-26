//this pointer: points to the current class members(objects)
//
#include<iostream>
using namespace std;
class Demo
{
    int a,b;    //Global Var
public:
    void Read(int a,int b){ //Local Var
        this->a=a;          
        this->b=b;
    }
    void Display(){
        cout<<"\nAdd: "<<a+b<<"\nSub: "<<a-b<<"\nMulti: "<<a*b<<endl;

    }
};
void main(){
    Demo d;         //Object creation
    cout << "\nUsing compile time";
    d.Read(7,8);    //Compile time i/p
    d.Display();    //function calling
    cout << "\nRun-Time i/p";
    int a,b;
    cout << "\nEnter two numbers: ";
    cin >>a>>b;
    d.Display();
    
}