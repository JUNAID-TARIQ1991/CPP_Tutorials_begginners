#include<iostream>
using namespace std;
class demo
{
private:
    /* data */
public:

     demo();

};
 demo:: demo(){
 cout<<"Welcome to the constructor\n";
 }
 int main(){
    demo demo_object;
    cout<<"this is simple example of constructor"<<endl;

    return 0;
 }

