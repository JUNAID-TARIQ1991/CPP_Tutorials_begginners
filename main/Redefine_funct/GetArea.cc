#include<iostream>
#include "Shape.hh"
#include "Rectangle.hh"
using namespace std;

int main(){
    
    Rectangle *r1 = new Rectangle(10,10);
    shape s1;
    shape *s2 = new shape(10,12);
    cout<<r1->area()<<endl;
    cout<<s1.area()<<endl;
    cout<<s2->area()<<endl;


    return 0;
}