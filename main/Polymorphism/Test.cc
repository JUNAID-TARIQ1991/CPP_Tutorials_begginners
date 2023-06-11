#include <iostream>
#include <iomanip>
#include "PassFailActivity.hh"
#include "Gradeactivity.hh"
using namespace std;
void displayGrade(GradeActivity &);
/*The displayGrade() function prototype is defined at the top of the code. This function takes a reference
to a GradeActivity object as a parameter and is
 used to display the numeric score and letter grade of the object.*/
int main()
{
    // Create a PassFailActivity object. Minimum passing
    /*In the main() function, a PassFailActivity object named test is created with
    a minimum passing score of 70. The SetScore() function is then used to set the score to 72. Finally,
     the displayGrade() function is called with the test object as a parameter.*/
    // score is 70.
    PassFailActivity test(70);
    // Set the score to 72.
    test.SetScore(72);
    // Display the object's grade data. The letter grade
    // should be 'P'. What will be displayed?
    displayGrade(test);
    return 0;
}
//***************************************************************
// The displayGrade function displays a GradedActivity object's 
// numeric score and letter grade.

    //***************************************************************
    /*The displayGrade() function displays the numeric score and letter grade of the GradeActivity object passed to it as a parameter using the getScore() and getLetterGrade() functions respectively.

    Note that PassFailActivity is derived from GradedActivity. This means that PassFailActivity inherits
    the getScore() function from GradedActivity and can also access the protected score variable.
    The PassFailActivity class also overrides the getLetterGrade()
    function of GradedActivity to return a pass/fail grade instead of a letter grade.*/
    void
    displayGrade(GradeActivity &activity)
{
    cout << setprecision(1) << fixed;
    cout << "The activity's numeric score is "
         << activity.GetScore() << endl;
    cout << "The activity's letter grade is "
         << activity.GetLetterGrade() << endl;
}