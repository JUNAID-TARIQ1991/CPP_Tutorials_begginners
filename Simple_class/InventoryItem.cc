#include<iostream>
#include "InventoryItem.hh"
using namespace std;
InventoryItem::InventoryItem(){//constructor #1 
    description="";
    cost=0.0;
    units=0;
}
InventoryItem::InventoryItem(string desc){
    description=desc;
    cost=0.0;
    units=0;
}
InventoryItem::InventoryItem(string desc, double c, int u){
    description=desc;
    cost=c;
    units=u;
}
void InventoryItem::set_description(string d){
    description=d;
}
void InventoryItem::set_cost(double c){
    cost =c;
}
void InventoryItem::set_unit(int u){
    units=u;
}
string InventoryItem::get_description(){
    return description;
}
double InventoryItem::get_cost(){
    return cost;
}
int InventoryItem::get_unit(){
    return cost;
}

int main(){
    InventoryItem item1;
item1.set_description("Hammer"); // Set the description
item1.set_cost(6.95);
// Set the cost
item1.set_unit(12);

    InventoryItem *book=new InventoryItem();
    cout<<book->get_cost()<<endl;
    InventoryItem *book1=new InventoryItem("phy",20,100);// we create an object book1 whose attributes 
    //set by constructor.
    cout<<book1->get_cost()<<endl;
    InventoryItem copy;
    copy.set_cost(21);
    cout<<copy.get_cost()<<endl;
//we can make array of objects
InventoryItem items[]= {InventoryItem("chem,10.0,90"),InventoryItem("comp",10.0,89)};
cout<<items[1].get_cost()<<endl;

    return 0;
}