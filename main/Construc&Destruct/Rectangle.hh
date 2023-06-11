#ifndef RECTANGLE_HH
#define RECTANGLe_HH
class Rectangle
{
private:
    /* data */
    double length;
    double width;
public:
    Rectangle(/* args */){

    length =0;
    width=0;
    };
    Rectangle(double l,double w){
        width =w;
        length =l;
    }
     double GetArea(){
        return width*length;
        
    }

    };
   
#endif