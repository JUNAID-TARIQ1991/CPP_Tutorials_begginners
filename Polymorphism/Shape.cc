#include <iostream>
using namespace std;

// base class
class Shape {
   protected:
      double width, height;

   public:
      Shape( double a = 0, double b = 0) {
         width = a;
         height = b;
      }
      
      // pure virtual function
      virtual double area() = 0;
};

// derived class
class Rectangle: public Shape {
   public:
      Rectangle( double a = 0, double b = 0):Shape(a, b) { }
      
      double area() { 
         cout << "Rectangle class area :" << endl;
         return (width * height); 
      }
};

// derived class
class Triangle: public Shape{
   public:
      Triangle( double a = 0, double b = 0):Shape(a, b) { }
      
      double area() { 
         cout << "Triangle class area :" << endl;
         return (width * height / 2); 
      }
};

int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   shape = &rec;
   
   // call rectangle area
   cout << shape.area() << endl;

   // store the address of Triangle
   shape = &tri;
   
   // call triangle area
   cout << shape.area() << endl;
   
   return 0;
}
/*In this example, there is a base class Shape which contains a pure virtual function area(). 
The Rectangle and Triangle 
classes are derived from the Shape class and implement the area() function.

The main() function creates objects of Rectangle and Triangle classes and stores their 
addresses in a Shape pointer variable. The area() function is called through the Shape pointer, 
which invokes the area() function of the respective derived class.

This demonstrates polymorphism, as the same function area() is used to perform different operations on
 different objects based on their types.*/
