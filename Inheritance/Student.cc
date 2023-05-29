#include<iostream>
#include "Student.hh"
#include"Person.hh"
#include<string>
using namespace std;
 
int main(){
    Student *junaid = new Student("junaid", 31, 1001);
    cout<<junaid->GetName()<<endl;

    /*cout<<"Junaid Info "<<junaid->Display_STinfo()<<endl; When calling junaid->Display_STinfo(), 
    you are trying to output the return value of the function, which is void, so it will cause an error. 
    Instead, just call the function directly without trying to output its return value. Here is the corrected version:*/
    
    //junaid->Display_STinfo();
    
    //Nothing will appear in name and age; reason
    /*n the Display_STinfo function of the Student class, you are calling the Display_info 
    function which belongs to the Person class to display the name and age, but you are not returning any value from this function.
     Therefore, when you try to print the return value of Display_STinfo in the main function, it won't display the name and age because they were not returned from Display_STinfo.

    To fix this, you can change the return type of Display_STinfo to string and make it return the concatenated string of the name, 
    age, and student ID, like this:
    string Display_STinfo(){
    return "Name: " + GetName() + ", Age: " + to_string(GetAge()) + ", Student ID: " + to_string(Student_id);
}
*/

//Now
cout<<junaid->Display_STinfo()<<endl;
    return 0; 
    
   }