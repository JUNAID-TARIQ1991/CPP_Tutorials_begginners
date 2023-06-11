#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include<string>
using namespace std;
class InventoryItem
{
private:
    /* data */
    string description;
    double cost;
    int units;
public:
    InventoryItem();//constructor#1
    InventoryItem(string );//constructor#02
    InventoryItem(string , double, int);//constructor#03
    void set_description(string);//mutator function
    void set_cost(double);
    void set_unit(int);
    string get_description();//accessor function
    double get_cost();
    int get_unit();

    
   

};
#endif