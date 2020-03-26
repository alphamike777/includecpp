#include<iostream>
using namespace std;

class Area{
    int r,l,b;
public:
    double Circle(){
        cout<<"Enter radius: ";
        cin>>r;
        return 3.14 * r * r;
    }
    
    double Triangle(int,int);
    
    void Square(int side){
        cout << "\nArea of square : " <<side * side;

    }
    
    int Rectangle(){
        cout<<"Enter l and b of rectangle: ";
        cin>>l>>b;
        return l * b;
    }
};
double Area::Triangle(int b,int h){
    return 0.5 * b * h;

}
int main(){
    Area a1;
    cout<<"\nArea of Circle: "<<a1.Circle();
    cout<<"\nArea of Triangle: "<<a1.Triangle(6,8); //compile time
    cout<<"\nArea of Rectangle: "<<a1.Rectangle();
    a1.Square(7);

    return 0;
}