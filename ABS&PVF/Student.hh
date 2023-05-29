/*An abstract base class cannot be instantiated, but other classes are
derived from it. A pure virtual function is a virtual member function of a
base class that must be overridden. When a class contains a pure virtual
function as a member, that class becomes an abstract base class.*/

/*•
•
•
•
•
When a class contains a pure virtual function, it is an abstract base class.
Pure virtual functions are declared with the = 0 notation.
Abstract base classes cannot be instantiated.
Pure virtual functions have no body, or definition, in the base class.
A pure virtual function must be overridden at some point in a derived class in order
for it to become nonabstract.*/
#ifndef STUDENT_HH
#define STUDENT_HH
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    string ID;
    int YearAdmitted;

public:
    // default constructor
    Student()
    {
        name = "";
        ID = "";
        YearAdmitted = 0;
    }
    // constructor
    Student(string n, string id, int year)
    {
        set(n, id, year);
    }
    // the set function set the attribute data//mutator function
    void set(string n, string id, int year)
    {
        name = n;
        ID = id;
        YearAdmitted = year;
    }
    // accessor function
    const string getname()
    {
        return name;
    }
    const string getid()
    {
        return ID;
    }
    int getYearAdmitted()
    {
        return YearAdmitted;
    }
    // Pure virtual function
    virtual int GetRemainingHours() = 0;
};
#endif