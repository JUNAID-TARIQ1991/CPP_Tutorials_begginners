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
    

double number;
double totalArea;
Rectangle *kitchen = new Rectangle; // Dynamically allocate the objects.
Rectangle *bedroom = new Rectangle;
Rectangle *den = new Rectangle;

//To hold a number
//The total area
//To point to kitchen dimensions
//To point to bedroom dimensions
//To point to den dimensions

// Get the kitchen dimensions.
cout << "What is the kitchen's length? ";
cin >> number;
// Get the length
kitchen->SetLength(number);
// Store in kitchen object
cout << "What is the kitchen's width? ";
cin >> number;
// Get the width
kitchen->SetWidth(number);
// Store in kitchen object
// Get the bedroom dimensions.
cout << "What is the bedroom's length? ";
cin >> number;
// Get the length
bedroom->SetLength(number);
// Store in bedroom object
cout << "What is the bedroom's width? ";
cin >> number;
// Get the width
bedroom->SetWidth(number);
// Store in bedroom object
// Get the den dimensions.
cout << "What is the den's length? ";
cin >> number;
den->SetLength(number);
cout << "What is the den's width? ";
cin >> number;
den->SetWidth(number);
// Get the length
// Store in den object
// Get the width
// Store in den object
// Calculate the total area of the three rooms.
totalArea = kitchen->getArea() + bedroom->getArea() +
den->getArea();
// Display the total area of the three rooms.
cout << "The total area of the three rooms is "
<< totalArea << endl;
// Delete the objects from memory.
delete kitchen;
delete bedroom;
delete den;
kitchen = nullptr;
// Make kitchen a null pointer.
bedroom = nullptr;
// Make bedroom a null pointer.
den = nullptr;
// Make den a null pointer.
return 0;
}