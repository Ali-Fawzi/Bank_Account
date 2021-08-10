#ifndef HEADER
#define HEADER
#include <string>

class BankAccount
{
private:
    std::string name;//Client Name.
    std::string acctnum;//Client Number Type string.
    double balance;//Balance.
public:
    BankAccount(const std::string& client,//constructer.
        const std::string& num, double bal = 0.0);
    void show(void) const;//the show function.
    void deposit(double cash);//function for the deposit opreation.
    void withdraw(double cash);
};

#endif // !HEADER
