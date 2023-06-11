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
    void set(int questions, int missed){
    double numeric_score;
    numQuestions=questions;
    missQuestions=missed;
    MarksQuestions=100.0/numQuestions;
    numeric_score=100-(MarksQuestions*missQuestions);
    //Here Call the inherited setScore function to set
    // the numeric score.
    SetScore(numeric_score);
}
double getpointEach(){
    return MarksQuestions;
}

};
#endif