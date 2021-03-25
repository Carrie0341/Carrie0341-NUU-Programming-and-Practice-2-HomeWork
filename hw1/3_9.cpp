/*
 * 3_9.cpp
 *
 *  Created on: 2021年3月24日
 *      Author: U0924015羅子程
 */

#include <iostream>
#include "Account.h"
using namespace std;

int main(int argc, char const *argv[]){

    //create Accounts
    Account account1{"User1", 5000};
    Account account2{"Boss1", -100};
    cout << "account1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();


    //withdraw Account1
    cout << "\n\nEnter withdraw amount for account1: ";
    int withdrawAmount;
    cin >> withdrawAmount;
    account1.withdraw(withdrawAmount);

    //print info
    cout << "\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();

    //withdraw Account2
    cout << "\n\nEnter withdraw amount for account2: ";
    cin >> withdrawAmount;
    account2.withdraw(withdrawAmount);

    //print info
    cout << "\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance() << endl;

    return 0;
}
