#ifndef CURVEDACTIVITY_HH
#define CURVEDACTIVITY_HH
#include "Gradeactivity.hh"
class CurvedActivity: public GradeActivity{
    protected:
    double Rawscore; //unadjusted score
        double percentage; //curved percetage
    public:
    CurvedActivity(): GradeActivity(){ ///default constructor also for base class
        Rawscore=0.0;
        percentage =0;
    }
    //mutator
    void SetScore(double s){
        Rawscore=s;
        GradeActivity::SetScore(Rawscore*percentage); // base class member function redefined in the derived class
    }
    void SetPercentage(double c){
        percentage=c;
    }
    
   
    //accessor function
    double GetRawScore(){
        return Rawscore;
   }

};
#endif