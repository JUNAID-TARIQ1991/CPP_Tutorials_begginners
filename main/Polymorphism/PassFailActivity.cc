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
    GradeActivity Physics (92); //object of GradeActivityClass

    

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
/*This code defines a function displayGrade() that takes a reference variable of GradeActivity class as a parameter. The function is then called in the main function to display the numeric 
score and letter grade of objects of different classes derived from GradeActivity.

The main() function creates objects of three classes: PassFailActivity, FinalExam, and GradeActivity. 
PassFailActivity and FinalExam are derived classes of GradeActivity.

test1 is an object of PassFailActivity class, initialized with minimum passing score of 70, and score of 60 is set using the SetScore() 
function.

test3 is an object of FinalExam class, initialized with total number of questions and number of questions answered correctly.

Physics is an object of GradeActivity class, initialized with a score of 80.

The GetMinPassingScore(), SetScore(), GetLetterGrade() and GetScore() functions are used to get or set the member variables of the objects.

The pointer test2 is created as a pointer to PassFailActivity class, initialized with minimum passing score of 70 and score of 72 using new keyword.
 test2 is then used to access the member functions of PassFailActivity class.

The displayGrade() function is called with objects of all three classes as arguments to display their numeric score and letter grade.

Note that the displayGrade() function takes a reference variable of GradeActivity class as parameter, which means it can be called with objects of all 
classes derived from GradeActivity.*/