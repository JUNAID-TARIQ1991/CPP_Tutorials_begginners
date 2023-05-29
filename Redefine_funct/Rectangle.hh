#ifndef RECTANGLE_HH
#define RECTANGLE_HH
#include "Shape.hh"
class Rectangle: public shape {
    
    public:
    Rectangle(int w, int h):shape(w,h){}
    int area(){
        return (width * height); 
    }

};
#endif