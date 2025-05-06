#include "goldenSectionSearch.h"
#include <cmath>

double goldenSectionSearch(const std::vector<int>& arr, int left, int right, double eps) {
    const double phi = (1 + std::sqrt(5)) / 2;  // Золоте число

    while (right - left > eps) {
        int mid1 = right - (right - left) / phi;
        int mid2 = left + (right - left) / phi;

        if (arr[mid1] < arr[mid2])  // Знаходимо максимум
            left = mid1;
        else
            right = mid2;
    }

    return (left + right) / 2.0;
}
