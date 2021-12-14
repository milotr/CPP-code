#include <string>

class Account
{
public:
    // account contrustor with 2 parameters
    Account(std::string accountName, int initialBalance)
        : name{accountName} //assign account name to data member: name (member initializer)
    {
        if (initialBalance > 0) //if the balance is not over 0 then keeps at 0, otherwise value is kept.
        {
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount)
    {
        if (depositAmount > 0)
        {
            balance = balance + depositAmount;
        }
    }

    int getBalance() const // const: doesn't chance value
    {
        return balance;
    }

    void setName(std::string accountName)
    {
        name = accountName;
    }

    std::string getName() const
    {
        return name;
    }

private:
    std::string name;
    int balance{0};
};