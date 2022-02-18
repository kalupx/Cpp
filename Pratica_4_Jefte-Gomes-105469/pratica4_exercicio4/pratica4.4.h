#ifndef ACCOUNT_H
#define ACCOUNT_H

class SavingsAccount
{
private:
    static float annualInterestRate;
    float  savingsBalance;
public:
    SavingsAccount(int val);
    ~SavingsAccount();
    float getbalance();
    float calculateMonthlyInterest();
    static void modifyInterestRate(float NannualInterestRate){
        annualInterestRate = NannualInterestRate;
    }
};

float SavingsAccount::annualInterestRate = 3;

SavingsAccount::SavingsAccount(int val)
{
     savingsBalance = val;
}

float SavingsAccount::getbalance(){
    return savingsBalance;
}

float SavingsAccount::calculateMonthlyInterest(){
    savingsBalance += (savingsBalance*annualInterestRate)/12;
    return savingsBalance;
}

SavingsAccount::~SavingsAccount()
{
}

#endif