#include "Rectangle1.hh" //double quote instead of <> indicate taht this is your written class.
#include<iostream>
#include<cstdlib>
using namespace std;
Rectangle::Rectangle(double w, double l, double h){
    length = l;
    width = w;
    height = h;

}

void Rectangle::SetWidth(double  w){
    if(w>=0)
        width =w;
    
    else{
            
                cout << "Invalid width\n";
                exit(EXIT_FAILURE);
                
        }

    }
void Rectangle::SetHeight(double h){
    if(h>=0)
        height =h;
        else{
            
                cout << "Invalid height\n";
                exit(EXIT_FAILURE);
                }
        }

void Rectangle::SetLength(double  l){
    if(l>=0)
        length =l;
        else{
            
                cout << "Invalid length\n";
                exit(EXIT_FAILURE);
                
        }

    }

double Rectangle::getArea(){
    return length * width;
}
double Rectangle::getVolume(){
    return length * width * height ;
}
int main(){
    double number;
    double totalvol;
    double totalarea;
    Rectangle *square = new Rectangle(12.0,13.0,12.0);/*passing arguments to constructor, this is common 
    //way to pass arguments to memeber functions.*/
    Rectangle *bedroom = new Rectangle(1,1,1);
    //Rectangle *bath = new Rectangle;

    //cout<<"What is the length of square ?"<<endl;
    //cin>>number;
    //square->SetLength(number);
    //cout<<"What is the width of square ?"<<endl;
    //cin>>number;
    //square->SetWidth(number);
    //cout<<"What is the height of square ?"<<endl;
    //cin>>number;
    //square->SetHeight(number);
    cout<<"Area of square is "<<square->getArea()<<endl;;
    cout<<"Volume of square is "<<square->getVolume()<<endl;
    cout<<"Area of bedroom is "<<bedroom->getArea()<<endl;
    cout<<"Volume of bedroom is "<<bedroom->getVolume()<<endl;


    


    return 0;
}