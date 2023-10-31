// 10-Switch case statement Calendar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the Year";
    int year;
    cin >> year;
    cout << "Enter the Month";
    int month;
    cin >> month;

    switch (month)
    {
    case 2:
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            cout << "29 Days Months";
        }
        else
        {
            cout << "28 Days Months";
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 Days Months";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 Days Months";
        break;
    default:
        cout << "Not Valid";

    }
    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
