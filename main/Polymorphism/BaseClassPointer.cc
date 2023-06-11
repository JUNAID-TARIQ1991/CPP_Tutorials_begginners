#include<iostream>
#include"PassFailActivity.hh"
#include"FinalExam.hh"
using namespace std;
void DisplayGrade(GradeActivity *activity){
    cout << "The activity numeric score is "<< activity->GetScore() << endl;
    cout << "The activity letter grade is "<< activity->GetLetterGrade() << endl;

}
int main(){
    GradeActivity *tests[3]= { new GradeActivity(88), new FinalExam(20,1), new PassFailActivity(70)};
    for (int count = 0; count < 3; count++)
    {
        cout<<"Test # "<<count+1<<endl;
        DisplayGrade(tests[count]);
    }
    



    return 0;
}