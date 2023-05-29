#ifndef CUBE_HH
#define CUBE_HH
#include "Rectangle.hh"
class cube: public Rectangle{
    private:
    protected:
    double height;
    double volume;
    public:
    //default constructoer
    cube(): Rectangle() {  ///In this case, the base class’s default constructor is being called.
        height =0;
        volume =0;

    }
    cube(double w, double l, double h): Rectangle(w,l){ ///You can also pass arguments to the base class constructor
        height =h;
        volume = GetArea() * h;
    }
    double GetVolume(){
        return volume;
    }

};
#endif