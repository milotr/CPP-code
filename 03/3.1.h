//Account class that contains a name data member and member funtions to set and get its value.

#include <string>

class Account
{
public:
    //member function: sets account name in the object
    void setName(std::string accountName)
    {
        name = accountName; //store account name
    }

    //member function that retrieves the name from the object (const: doesn't change, void: function doesn't return any data to its calling function)
    std::string getName() const
    {
        return name; //return names's value to the function's caller
    }

private:
    std::string name; //data member as a holder

}; //end class Account