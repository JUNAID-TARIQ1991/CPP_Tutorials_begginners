#include<iostream>
#include "Student.hh"
#include "csStudent.hh"
#include "mathStudent.hh"

int main(){
    csStudent jun("junaid", "01", 2023);
    mathStudent zoh("zoh", "01", 2023)
    //csStudent *jun = new csStudent("junaid", "01", 2023);
    cout<<jun.GetRemainingHours();
    cout<<jun.getname();
    jun.SetMathHour(12);
    // Student has taken
    jun.SetCsHour(20);
    // Student has taken
    jun.SetGeHour(40); // Student has taken
    cout<<jun.GetRemainingHours();


    return 0;
}