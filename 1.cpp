#pragma region init
#include <iostream>
#include <limits>
using namespace std;
#pragma endregion init


#pragma region template


auto inputHandler();

//Prints the selection options
void printmenu();

//Draw functions WIP

#pragma endregion template

#pragma region main
int main()
{
    //to be modified, for now debug
    printmenu();
    cout << "User's selection: " << inputHandler();


    return 0;
}
#pragma endregion main

#pragma region func
auto inputHandler()
{
    int input;
    while (true)
    {
        cout << "Please enter your selection" << endl;
        cin >> input;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\rInvalid input, Please try again:\n"
                 << endl;
        }
        else
        {
            break;
        }
    }
    return input;
}

void printmenu()
{
    cout << "Hello World, this is a menu!" << endl;
    cout << "\n Draw a horizontal line";
    cout << "1) Draw a horizontal line";
    cout << "\n2) Draw a vertical line";
    cout << "\n3) Draw a square";
    cout << "\n4) Draw a rectangle";
    cout << "\n5) Quit";
}

#pragma endregion func