#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
private:
    /* data */
    double width;
    double length;
    double height;

public:
    void SetWidth(double w);
    void SetLength(double l);
    void SetHeight(double h);
    double getArea();
    double getVolume();

};
#endif

