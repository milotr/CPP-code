#include <iostream>
#include "3.8.h"

using namespace std;

int main()
{
    Account account1{"Jane Green", 50};

    cout << "account1: " << account1.getBalance() << " $" << endl;

    cout << "Deposit money: ";
    int depositAmount;
    cin >> depositAmount;

    cout << "adding " << depositAmount << "$ to your account.";
    account1.deposit(depositAmount);

    //display balances
    cout << "\n account1: " << account1.getName() << " balance is $" << account1.getBalance();
}