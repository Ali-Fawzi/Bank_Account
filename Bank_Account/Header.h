#ifndef HEADER
#define HEADER
#include <string>

class BankAccount
{
private:
    std::string name;//Client Name.
    std::string acctnum;//Client Number Type string.
    double balance;
public:
    BankAccount(const std::string& client,
        const std::string& num, double bal = 0.0);
    void show(void) const;
    void deposit(double cash);
    void withdraw(double cash);
};

#endif // !HEADER
