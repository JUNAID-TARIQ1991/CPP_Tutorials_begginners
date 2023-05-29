#include<iostream>
using namespace std;
double width;
double height;
void SetWidth(double w){
    cout<<"the width of rectangle"<< w <<endl;
    width =w;
    }

void SetLength(double h){
  cout<<"the hight of rectangle"<< h <<endl;
  height=h;

    }
double Area(){
    
    double area= width* height;
    cout<<"the area of triangle is"<<area<<endl;
    return area;

}
int main(){
    SetWidth(12.5);
    SetLength(10.0);
    Area();
    return 0;
}