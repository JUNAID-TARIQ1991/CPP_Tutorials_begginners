#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
     void setID(void){
        cout<< "Enter the ID of employee"<<endl;
        cin>>id;
     }
     void setsalary(void){
        cout << "set the salary of employee"<<endl;
        cin>>salary;

     }
     void Get_data(void){
        cout<<"The id of employee is   "<< id << "  and salary   " << salary<<endl; 
     }
};
int main(){
    Employee star[5];
    for (int i = 0; i < 5; i++)
    {
        star[i].setID();
        star[i].setsalary();
        star[i].Get_data();
    }
    
    return 0;
}