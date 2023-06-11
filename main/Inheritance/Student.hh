#ifndef STUDENT_HH
#define STUDENT_HH
#include "Person.hh"
#include<string>
using namespace std;
class Student : public Person
{
    private:
    int Student_id;
    public:
    Student(string n, int a, int id): Person(n,a){
     Student_id =id;   
    }

    string Display_STinfo(){
    return "Name: " + GetName() + ", Age: " + to_string(GetAge()) + ", Student ID: " + to_string(Student_id);
}

    };
    



#endif