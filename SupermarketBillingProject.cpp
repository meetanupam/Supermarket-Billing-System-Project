/*********************************************

SUPERMARKET BILLING SYSTEM PROJECT

             BY

        ANUPAM SHAKYA


*/

//HEADER FILES//

#include<iostream>
#include<fstream> // For File Handling Operations

using namespace std; // NameSpace Standard;

class shopping // Create a Class, Declare Variables and function.
{
private: // private scope
    int product_code; // Integer for product code.
    float price; // Float for product price
    float discount; // For discount
    string product_name; // String for product name

public: // Public Scope
    // Here we will declare the functions

    void menu(); // Menu Function
    void admininstrator(); // Administrator Function
    void buyer();
    void add();
    void edit(); // To Edit
    void rem(); // To Remove
    void list();
    void receipt();
};
// Menu Function
void shopping :: menu();
{
    m;
    int choice; // Choice Variable
    string email;
    string password; // We need email and password for login purpose

    cout <<"\t\t\t\t\t\t____________________________\n";
    cout <<"\t\t\t\t\t\t                            \n";
    cout <<"\t\t\t\t\t\t  SUPERMARKET MAIN MENU     \n";
    cout <<"\t\t\t\t\t\t                            \n";
    cout <<"\t\t\t\t\t\t____________________________\n";
    cout <<"\t\t\t\t| 1- Administrator |\n';
    cout <<"\t\t\t\t|                  |\n';
    cout <<"\t\t\t\t| 2- Buyer         |\n';
    cout <<"\t\t\t\t|                  |\n';
    cout <<"\t\t\t\t| 3- Exit          |\n';
    cout <<"\n\t\t\t Please Select ";

    // Take input from the user

    cin >> choice;

    // Now we will use switch case

    switch(choice)
    {
    case 1:
        cout << "\t\t\t Please Login \n";
        cout << "\t\t\t Enter Your Email \n";
        cin >> email;
        cout << "\t\t\t Enter Password    \n";
        cin >> password;

        // Now we have to set the email and password for the admininstrator only.

        if(mail="anupam@gmail.com" && password="anupam@18")
        {
            administrator();
        }
        else
        {
            cout << "Invalid Credentials";
        }
        break;
    case 2:
        {
            buyer();
        }
    case 3:
        {
            exit();
        }
    default:
        {
            cout << "Select From The Given Options";
        }
    }
goto m;
}

void shopping:: administrator()
{
    m;
    int choice;
    cout << "\n\n\n\t\t\t Administrator Menu";
    cout <<"\n\t\t\t|____1- Add the Product_____|";
    cout <<"\n\t\t\t|                          _|";
    cout <<"\n\t\t\t|____2- Modify the Product__|";
    cout <<"\n\t\t\t|                          _|";
    cout <<"\n\t\t\t|____3- Delete the Product__|";
    cout <<"\n\t\t\t|                          _|";
    cout <<"\n\t\t\t|____4- Go Back To Menu_____|";

    cout << "\n\n\t Enter Your Choice";
    cin >> choice;

    switch(choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        rem();
        break;
    case 4:
        menu();
        break;

    default:
        cout << "Invalid Choice";
    }
    goto m;
}

// Function For Buyer

void shopping:: buyer()
{
    m;
    int choice;
    cout << "\n\n\n\t\t\t Buyer Menu";
    cout << "\n\n\t\t|____1- Buy Product____|";
    cout << "\n\n\t\t|______________________|";
    cout << "\n\n\t\t|__2- Go Back To Menu__|";

}
