#ifndef GRADEACTIVITY_HH
#define GRADEACTIVITY_HH
class GradeActivity{
    protected:
    double score;
    public:
    GradeActivity(){ ///default constructor
        score=0.0;
    }
    GradeActivity(double s){ //constructor
        score=s;
    }
    //mutator
    void SetScore(double s){
        score=s;

    }
    //accessor function
    double GetScore(){
        return score;
   }
    virtual char GetLetterGrade() /*The only change we have made to this class is to declare getLetterGrade as virtual in
line 27. This tells the compiler not to bind calls to getLetterGrade with the function at
compile time. Instead, calls to the function will be bound dynamically to the function at
runtime.*/
{
    char letter_grade;
    if (score >90){
        letter_grade='A';
    }
    else if (score >80){
        letter_grade='B';
    }
    else if (score>70){
        letter_grade='C';
    }
    else {
        letter_grade='F';
    }
    return letter_grade;
}

};
#endif