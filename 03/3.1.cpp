// Creating and manipulating an Object

#include <iostream>
#include <string>
#include "3.1.h"

using namespace std;

int main()
{
    Account myAccount; //create Account object: myAccount

    cout << "Current name: " << myAccount.getName(); //usiing getName function to return a name, could be an empty string.

    cout << "\n Enter account name: ";
    string theName;             // making a string variable
    getline(cin, theName);      // get the string as input
    myAccount.setName(theName); //set the name using the function and input data

    //displaying the name

    cout << "The account name is: " << myAccount.getName() << endl;
}