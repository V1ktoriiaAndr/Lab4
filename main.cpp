#include <iostream>
#include <vector>
#include <algorithm>
#include "halfDivisionSearch.h"
#include "search.h"
#include "goldenSectionSearch.h"

void printMenu() {
    std::cout << "\n=== Search Menu ===\n";
    std::cout << "1. Half Division Search\n";
    std::cout << "2. Binary Search\n";
    std::cout << "3. Golden Section Search (Find Maximum Index)\n";
    std::cout << "0. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    std::vector<int> data = {4, 2, 9, 1, 7, 3, 8, 5, 6};
    int target, choice;

    do {
        printMenu();
        std::cin >> choice;

        if (choice == 0) break;

        std::cout << "Enter the value to search for: ";
        std::cin >> target;

        switch (choice) {
            case 1:
                std::cout << "Result: index = " << halfDivisionSearch(data, target) << "\n";
            break;
            case 2:
                std::sort(data.begin(), data.end());
            std::cout << "Result: index = " << binarySearch(data, target) << "\n";
            break;
            case 3:
                std::cout << "Golden section max index ≈ "
                          << goldenSectionSearch(data, 0, data.size() - 1) << "\n";
            break;
            default:
                std::cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    std::cout << "Exiting program.\n";
    return 0;
}
