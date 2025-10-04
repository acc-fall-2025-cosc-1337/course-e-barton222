#include<iostream>
#include "repetition.h"

using std::cin;
using std::cout;

int main()
{
    int choice;

    do
    {
        cout << "\nHomework 4 Menu\n";
        cout << "1 - Factorial\n";
        cout << "2 - Sum odd numbers\n";
        cout << "3 - Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            int num;
            do {
                cout << "Enter a number (1 - 9): ";
                cin >> num;
            } while(num <= 0 || num >= 10);

            cout << "Factorial: " << get_factorial(num) << "\n";
        }
        else if(choice == 2)
        {
            int num;
            do {
                cout << "Enter a number (1 - 99): ";
                cin >> num;
            } while(num <= 0 || num >= 100);

            cout << "Sum of odd numbers: " << sum_odd_numbers(num) << "\n";
        }

    } while(choice != 3);

    return 0;
}
