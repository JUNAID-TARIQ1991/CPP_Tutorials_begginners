#ifndef CSSTUDENT_HH  
#define CUDENT_HH
#include"Student.hh"
#include<string>
using namespace std;
// Constants for required hours
const int MATH_HOURS = 20;
// Math hours
const int CS_HOURS = 40;
// Computer science hours
const int GEN_ED_HOURS = 60; // General Ed hours

class csStudent:public Student
{
    private:
    int Mathhour;
    int Cshour;
    int GenEdHour;
    public:
    //Default constructor
    csStudent():Student(){
        Mathhour=0;
        Cshour=0;
        GenEdHour=0;
    }
    //Constructor
    csStudent(string n, string id, int year):Student(n,id,year){
        Mathhour=0;
        Cshour=0;
        GenEdHour=0;
    }
    //mutator function
    void SetMathHour(int mh){
        Mathhour=mh;
    }
    void SetCsHour(int ch){
        Cshour=ch;
    }
    void SetGeHour(int gh){
        GenEdHour=gh;
    }
    
    //accessor function
    
    virtual int GetRemainingHours(){
    int ReqHours, RemHours;
    ReqHours=MATH_HOURS+CS_HOURS+GEN_ED_HOURS;
    RemHours=ReqHours-(Mathhour+Cshour+GenEdHour);
    return RemHours;
    }

};



#endif