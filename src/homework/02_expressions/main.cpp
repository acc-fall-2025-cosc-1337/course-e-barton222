#include <iostream>
#include "hwexpressions.h"

int main() {
    double meal_amount, tip_rate;

    std::cout << "Enter meal amount: ";
    std::cin >> meal_amount;

    std::cout << "Enter tip rate (e.g., enter 0.15 for 15%): ";
    std::cin >> tip_rate;

    double tax = get_sales_tax_amount(meal_amount);
    double tip = get_tip_amount(meal_amount, tip_rate);
    double total = meal_amount + tax + tip;

    std::cout << "\nRECEIPT\n";
    std::cout << "------------------------\n";
    std::cout << "Meal Amount:   " << meal_amount << "\n";
    std::cout << "Sales Tax:     " << tax << "\n";
    std::cout << "Tip Amount:    " << tip << "\n";
    std::cout << "Total:         " << total << "\n";

    return 0;
}
