#ifndef PASSFAILACTIVITY_HH
#define PASSFAILACTIVITY_HH
#include "Gradeactivity.hh"
class PassFailActivity : public GradeActivity{  ////BaseClass name
    protected:
    double minpassingscore;
    public:
    //Default constructor
    PassFailActivity():GradeActivity(){  //base class constructor
        minpassingscore=0.0;
    }
    //constructor
    PassFailActivity(double mps){
        minpassingscore=mps;

    }
    //Mutator
    void SetMinPassingScore(double mps){
        minpassingscore=mps;
    }
    //Accessor
    double GetMinPassingScore(){
        return minpassingscore;
    }
    char GetLetterGrade(){
    char lettergrade;
    if(score>=minpassingscore)
    lettergrade='p';
    else
    lettergrade = 'F';
    return lettergrade;
    }

};
#endif