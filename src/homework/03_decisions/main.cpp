#include <iostream>
#include "decisions.h"

int main() {
    int option;
    int grade;

    std::cout << "MAIN MENU\n";
    std::cout << "1 - Letter grade using if\n";
    std::cout << "2 - Letter grade using switch\n";
    std::cout << "3 - Exit\n";
    std::cout << "Enter option: ";
    std::cin >> option;

    if (option == 1) {
        std::cout << "Enter a grade (0-100): ";
        std::cin >> grade;
        if (grade >= 0 && grade <= 100)
            std::cout << "Letter grade: " << get_letter_grade_using_if(grade) << "\n";
        else
            std::cout << "Number is out of range.\n";
    } else if (option == 2) {
        std::cout << "Enter a grade (0-100): ";
        std::cin >> grade;
        if (grade >= 0 && grade <= 100)
            std::cout << "Letter grade: " << get_letter_grade_using_switch(grade) << "\n";
        else
            std::cout << "Number is out of range.\n";
    } else if (option == 3) {
        std::cout << "Exiting program...\n";
    } else {
        std::cout << "Invalid option.\n";
    }

    return 0;
}
