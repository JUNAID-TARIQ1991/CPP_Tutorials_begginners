#include<iostream>
#include"Gradeactivity.hh"
using namespace std;
//member function GetGradeLetter

//double GradeActivity::GetScore(){
  //  return score;
//}
int main(){
    GradeActivity *math = new GradeActivity();
    cout<<math->GetScore()<<endl;/*here we will get score zero; because of default contructor*/
    GradeActivity *physics=new GradeActivity(89.6);
    /*request for member ‘GetScore’ in ‘physics’, which is of pointer type ‘GradeActivity*’ (maybe you meant to use ‘->’ ?)*/
    cout<<physics->GetScore()<< "  "<<physics->GetLetterGrade()<<endl;
    GradeActivity chemistry;
    chemistry.SetScore(98.0);/*here due to inline member function setscore we use chemistry.SetScore*/
    cout<<chemistry.GetScore()<<endl;


    



    return 0;
}