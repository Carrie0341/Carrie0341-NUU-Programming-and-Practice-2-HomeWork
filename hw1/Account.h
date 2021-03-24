#include <string>
class Account
{
public:
    Account(std::string accountName, int initialBalance) : name{accountName}
    {
        if (initialBalance > 0)       // if the initialBalance is valid
            balance = initialBalance; // assign it to data member balance
    }

    void withdraw(int withdrawAmount)
    {
          if ( withdrawAmount > balance )
             std::cout << "Withdrawal amount exceeded account balance."<<std::endl;
          if ( withdrawAmount <= balance )
             balance = balance - withdrawAmount;
    }

    void deposit(int depositAmount)
    {
        if (depositAmount > 0)                 // if the depositAmount is valid
            balance = balance + depositAmount; // add it to the balance
    }
    int getBalance() const
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