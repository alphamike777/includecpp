#include<iostream>
using namespace std;

class Demo
{
    int a,b;
public:
    void Read(){
        cout<<"\nEnter two numbers :";
        cin>>a>>b;
    }
    void Display(){
        cout<<"\nAdd: "<<a+b<<"\nSub: "<<a-b<<"\nMulti: "<<a*b<<endl;

    }
};
void main(){
    Demo d;         //Object creation
    d.Read();
    d.Display();
}