#include <iostream>

int main() {
    auto randomVector = generateRandomVector<int>(10);
    auto sortedVector = generateSortedVector<int>(10);
    auto reverseSortedVector = generateSortedReverseVector<int>(10);

    for (int num : randomVector) std::cout << num << " ";
    std::cout << "\n";

    for (int num : sortedVector) std::cout << num << " ";
    std::cout << "\n";

    for (int num : reverseSortedVector) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
