#ifndef FINALEXAM_H
#define FINALEXAM_H
#include "Gradeactivity.hh"

class FinalExam:public GradeActivity{
    private:
    int numQuestions;
    double MarksQuestions;
    int missQuestions;
    public:
    FinalExam(){
        numQuestions=0;
        MarksQuestions=0.0;
        missQuestions=0;
    }
   FinalExam(int queston, int missed){
    set(queston,missed);
    }
    void set(int,int);
    int getNumQuestions();
    double getpointEach();
    int getNumMissed();

};
#endif