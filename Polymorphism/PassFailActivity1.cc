#include<iostream>
#include"PassFailActivity.hh"
#include"FinalExam.hh"

using namespace std;
//Function prototype:
void displayGrade(GradeActivity *activity) // activity is a reference verable or pointer
{
cout << "The activity numeric score is "<< activity->GetScore() << endl;
cout << "The activity letter grade is "<< activity->GetLetterGrade() << endl;
};
/////////////////
////////
/* activity is not a reference variable or a pointer but the activity parameter is an object variable, not a reference
variable 
void displayGrade(GradeActivity activity1) // activity is a reference verable or pointer
{
cout << "The activity numeric score is "<< activity1.GetScore() << endl;
cout << "The activity letter grade is "<< activity1.GetLetterGrade() << endl;
};
*/
int main(){
    PassFailActivity test1(70); //class object of PassFailActivity class
    FinalExam test3(10,1); //object of FinalExam Class
    GradeActivity Physics (80); //object of GradeActivityClass

    cout<<test1.GetMinPassingScore()<<endl;
    test1.SetScore(60);

    ///class object as pointer type
    PassFailActivity *test2 = new PassFailActivity(72.0); //Set min passingscore =70
    test2->SetScore(75);

    cout<<test2->GetMinPassingScore()<<endl;
    cout<<test2->GetLetterGrade()<<endl;
    cout<<test2->GetScore()<<endl;
    
    //test2->GetScore();
    cout<<test2->GetLetterGrade()<<endl;
    cout<<test2->GetScore()<<endl;
    displayGrade(&test1);
    displayGrade(&test3);
    displayGrade(&Physics);

    return 0;
}
