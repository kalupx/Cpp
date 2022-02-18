#ifndef ACCOUNT_H
#define ACCOUNT_H
class SavingsAccount
{
private:
    static float annualInterestRate;
    float savingsBalance;
public:
    SavingsAccount(int val);
    ~SavingsAccount();
    float savingsBalance();
    static modifyInterestRate();
};

SavingsAccount::SavingsAccount(int val)
{
}

SavingsAccount::~SavingsAccount()
{
}

float SavingsAccount::savingsBalance(){
    savingsBalance = (annualInterestRate*savingsBalance)/12;
    return savingsBalance;
}

static SavingsAccount::modifyInterestRate(){
    std::cout << "teste..." << std::endl;
}
#endif