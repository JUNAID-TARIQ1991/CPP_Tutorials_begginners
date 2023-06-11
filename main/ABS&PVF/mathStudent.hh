#ifndef MATHSTUDENT_HH  
#define MATHSTUDENT_HH
#include"Student.hh"
#include<string>
using namespace std;
// Constants for required hours
const int MATH_HOURS1 = 40;
// Math hours
const int CS_HOURS1 = 20;
// Computer science hours
const int GEN_ED_HOURS1 = 60; // General Ed hours

class mathStudent:public Student
{
    private:
    int Mathhour;
    int Cshour;
    int GenEdHour;
    public:
    //Default constructor
    mathStudent():Student(){
        Mathhour=0;
        Cshour=0;
        GenEdHour=0;
    }
    //Constructor
    mathStudent(string n, string id, int year):Student(n,id,year){
        Mathhour=0;
        Cshour=0;
        GenEdHour=0;
    }
    //mutator function
    virtual void SetMathHour(int mh){
        Mathhour=mh;
    }
    virtual void SetCsHour(int ch){
        Cshour=ch;
    }
    virtual void SetGeHour(int gh){
        GenEdHour=gh;
    }
    
    //accessor function
    
    virtual int GetRemainingHours(){
    int ReqHours, RemHours;
    ReqHours=MATH_HOURS1+CS_HOURS1+GEN_ED_HOURS1;
    RemHours=ReqHours-(Mathhour+Cshour+GenEdHour);
    return RemHours;
    }

};



#endif