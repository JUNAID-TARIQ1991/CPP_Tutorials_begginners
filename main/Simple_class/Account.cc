#include<iostream>
#include"Account.hh"
#include <cctype>
#include <iomanip>
using namespace std;
Account::Account(double irate=0.045, double bal=0){
    balance=bal;
    interest_rate=irate;
    interest = 0;
    transaction =0;
}
void Account::Setinterest_rate(double irate){
    interest_rate=irate;

}
void Account::make_deposit(double amount){
    balance+=amount,transaction ++;
}
bool Account::withDraw(double amount){
    if (balance<amount)
    {
        return false;
    }
    else{
        balance-=amount, transaction++;
        return true;
        }
    
}
void Account::calc_interest(){
    interest = interest_rate * balance;
    balance+=interest;
}
double Account::Get_interestrate(){
    return interest_rate;
}
double Account::Getbalance(){
    return balance;
}
double Account::Getinterest(){
    return interest;
}
int Account::Get_transactions(){
    return transaction;
}
// This program demonstrates the Account class.
// Function prototypes
void displayMenu();
void make_deposit(Account &);
void withDraw(Account &);
int main()
{
Account savings;
char choice;
// Savings account object
// Menu selection
// Set numeric output formatting.
cout << fixed << showpoint << setprecision(2);
do
{
// Display the menu and get a valid selection.
displayMenu();
cin >> choice;
while (toupper(choice) < 'A' || toupper(choice) > 'G')
{
cout << "Please make a choice in the range "
<< "of A through G:";
cin >> choice;
}
// Process the user's menu selection.
switch(choice)
{
case 'a':
case 'A': cout << "The current balance is $";
cout << savings.Getbalance() << endl;
break;
case 'b':
case 'B': cout << "There have been ";
cout << savings.Get_transactions()
<< " transactions.\n";
break;
case 'c':
case 'C': cout << "Interest earned for this period: $";
cout << savings.Getinterest() << endl;
break;
case 'd':
case 'D': make_deposit(savings);
break;
case 'e':
case 'E': withDraw(savings);
break;
case 'f':
case 'F': savings.calc_interest();
cout << "Interest added.\n";
}
} while (toupper(choice) != 'G');
return 0;
}
//*****************************************************
// Definition of function displayMenu. This function *
// displays the user's menu on the screen.
//*
//*****************************************************
void displayMenu()
{
cout << "\n MENU \n";
cout << "-----------------------------------------\n";
cout << "A) Display the account balance\n";
cout << "B) Display the number of transactions\n";
cout << "C) Display interest earned for this period\n";
cout << "D) Make a deposit\n";
cout << "E) Make a withdrawal\n";
cout << "F) Add interest for this period\n";
cout << "G) Exit the program\n\n";
cout << "Enter your choice: ";
}
//**************************************************************
// Definition of function makeDeposit. This function accepts *
// a reference to an Account object. The user is prompted for *
// the dollar amount of the deposit, and the makeDeposit

// member of the Account object is then called.

//**************************************************************
void make_deposit(Account &acnt)
{
double dollars;
cout << "Enter the amount of the deposit: ";
cin >> dollars;
cin.ignore();
acnt.make_deposit(dollars);
}
//**************************************************************
// Definition of function withdraw. This function accepts

// a reference to an Account object. The user is prompted for *
// the dollar amount of the withdrawal, and the withdraw

// member of the Account object is then called.

//**************************************************************
void withDraw(Account &acnt)
{
double dollars;
cout << "Enter the amount of the withdrawal: ";
cin >> dollars;
cin.ignore();
if (!acnt.withDraw(dollars))
cout << "ERROR: Withdrawal amount too large.\n\n";
}