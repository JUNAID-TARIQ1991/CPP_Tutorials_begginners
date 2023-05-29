#ifndef GRADEACTIVITY_HH
#define GRADEACTIVITY_HH
class GradeActivity{
    private:
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
    char GetLetterGrade() 
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