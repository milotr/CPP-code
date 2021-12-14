// Using the Account construor to initialize the name data member at the time Account object is created.

#include <iostream>
#include "3.4.h"

using namespace std;

int main()
{
    //create 2 Account objects:
    Account account1{"Jane Green"};
    Account account2{"John Blue"};

    //display values:
    cout << "account1 name is: " << account1.getName() << endl;
    cout << "account2 name is: " << account2.getName() << endl;
}