
///A base class member function may be redefined in a derived class.
/*Notice that the CurvedActivity class has a setScore member function. This function has
the same name as one of the base class member functions. When a derived class’s member
function has the same name as a base class member function, it is said that the derived class
function redefines the base class function. When an object of the derived class calls the func-
tion, it calls the derived class’s version of the function.*/

#include<iostream>
#include "CurvedActivity.hh"
using namespace std;
int main(){
    CurvedActivity Exam;
    Exam.SetPercentage(80);
    Exam.SetScore(1.2);
    cout<<"The grade of student is"<<" "<<Exam.GetLetterGrade()<<endl;
    cout<<"The Score of student"<<Exam.GetScore()<<endl;
    return 0;
}