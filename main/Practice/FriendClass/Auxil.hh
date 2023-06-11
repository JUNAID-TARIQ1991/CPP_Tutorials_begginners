#ifndef AUXIL_H
#define AUXIL_H
class Budget; // Forward declaration of Budget class
// Aux class declaration
class AuxiliaryOffice
{
private:
double auxBudget;
public:
AuxiliaryOffice()
{ auxBudget = 0; }
double getdivisionbudget() const
{ return auxBudget; }
void addbudget(double, Budget &);
};
void AuxiliaryOffice::addbudget(double b Budget &div){
    auxBudget = b;
    div.corpBuget += b;
}
#endif