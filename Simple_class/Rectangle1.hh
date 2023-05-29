#ifndef RECTANGLE1_H
#define RECTANGLE1_H
class Rectangle
{
private:
    /* data */
    double width;
    double length;
    double height;

public:

    Rectangle(double, double, double);
    void SetWidth(double w);
    void SetLength(double l);
    void SetHeight(double h);
    double getArea();
    double getVolume();

};
#endif

