#ifndef BUDGET_HH
#define Budget_HH
/*These above lines of code are called include guards. They are used to prevent multiple definitions
 of the same class or header file in the same compilation unit. If BUDGET_HH has not been defined yet,
 then the code between these lines will be included in the compilation unit.*/
class Budget
{
private:
    /* data */
    static double corpBudget;
    double divisionbudget;
public:
    Budget();
    addbudget(double);
    getdivisionbudget();
    getcorpbudget();
    static void mainOffice(double);
    
    friend void AuxiliaryOffice::addBudget(double, Budget &);
/*This code declares the AuxiliaryOffice::addBudget function as a friend of the Budget class.
 This means that the addBudget function can access the private member variables 
of the Budget class. Notice the function takes two arguments: a
double and a reference object of the Budget class. The Budget class object that is to be
modified by the function is passed to it, by reference, as an argument*/



    ~Budget();
};
/*This code defines the Budget class with two private member variables (corpBudget and divisionbudget) 
and four member functions (Budget, addbudget, getdivisionbudget, and getcorpbudget). corpBudget 
is a static member variable, which means it is shared among all instances of the Budget class. 
addbudget is a member function that takes a double argument and adds it to both the divisionbudget
 and corpBudget. getdivisionbudget and getcorpbudget are member functions that return the divisionbudget
  and corpBudget, respectively.
 ~Budget is a destructor, which is called when an instance of the Budget class is destroyed.*/
void Budget::Budget(){
    divisionbudget=0;
}
/*This code defines the constructor of the Budget class. It sets the divisionbudget to 0.*/
void Budget::addbudget(double b){
    divisionbudget += b;
    corpBudget += b;
}
int Budget::getcorpbudget(){
    return corpBudget;
}
int Budget::getdivisionbudget(){
    return divisionbudget;
}

#endif