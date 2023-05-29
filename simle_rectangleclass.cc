#include<iostream>
using namespace std;
class Rectangle
{
private:
    /* data */
    double width;
    double length;
public:
    void SetWidth(double w);
    void SetLength(double l);
    double getWidth();
    double getArea();
};

void Rectangle::SetWidth(double w){
    width= w;
}
void Rectangle::SetLength(double l){
    length = l;
}
double Rectangle::getWidth(){
    return width;
}
double Rectangle::getArea(){
    return width * length;

}
int main(){
    Rectangle Box;
    Box.SetWidth(12);
    Box.SetLength(10);
    cout<<Box.getWidth()<<endl;;
    cout<<Box.getArea()<<endl;

    return 0;
}


