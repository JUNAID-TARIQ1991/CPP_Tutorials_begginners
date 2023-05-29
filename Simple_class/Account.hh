#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account{
    private:
    double balance;
    double interest_rate;
    double interest;
    int transaction;
    public:
    Account(double, double);
    void Setinterest_rate(double);
    void make_deposit(double);
    bool withDraw(double);
    void calc_interest();
    double Get_interestrate();
    double Getbalance();
    double Getinterest();
    int Get_transactions();
};
#endif


