// This program demonstrates the order in which base and
// derived class constructors and destructors are called.
#include<iostream>
using namespace std;
//Base Class
class BaseClass{
    public:
    BaseClass(){
        cout<<"This is a base class constructor"<<endl;
    
    }
    ~BaseClass(){
         cout<<"This is a base class constructor"<<endl;

    }
};
//Derived Class
class DeriveClass:public BaseClass{
    public:
    DeriveClass(){
        cout<<"This is a derived class constructor"<<endl;
    
    }
    ~DeriveClass(){
         cout<<"This is a derived class constructor"<<endl;

    }

};
int main(){
    cout<<"We are going to define derived classs object"<<endl;
    DeriveClass object;
    cout<<"program is going to end"<<endl;

    return 0;
}