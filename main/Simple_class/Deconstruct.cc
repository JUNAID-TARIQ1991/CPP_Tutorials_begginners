#include<iostream>
#include"Deconstruct.hh"
#include <string>
using namespace std;
contact_info::contact_info(string n, double p){
    name= n;
    cell= p;
}
string contact_info::get_name(){
    return name;
}
double contact_info::get_phone(){
    return cell;
}

int main(){
    contact_info *entry = new contact_info(junaid, 03315263905);
    entry->get_name();
    entry->get_phone();

    return 0;
}