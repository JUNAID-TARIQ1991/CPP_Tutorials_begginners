#include<iostream>
#include "Cube.hh"
using namespace std;

int main(){
    cube *One = new cube(10.0,12.5,2.0);
    cout<<"The volume of cube is " <<"  "<<One->GetVolume()<<endl;
    cout<<"The base area of cube"<< "  " <<One->GetArea()<<endl;

    return 0;
}