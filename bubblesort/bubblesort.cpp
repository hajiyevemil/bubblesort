#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <limits>

template <typename T>
std::vector<T> generateRandomVector(size_t n) {
    std::vector<T> result(n);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<T> dist(std::numeric_limits<T>::min(), std::numeric_limits<T>::max());
    std::generate(result.begin(), result.end(), [&]() { return dist(gen); });
    return result;
}

template <typename T>
std::vector<T> generateSortedVector(size_t n) {
    std::vector<T> result(n);
    for (size_t i = 0; i < n; ++i) result[i] = static_cast<T>(i + 1);
    return result;
}

template <typename T>
std::vector<T> generateSortedReverseVector(size_t n) {
    std::vector<T> result(n);
    for (size_t i = 0; i < n; ++i) result[i] = static_cast<T>(n - i);
    return result;
}

int main() {
    size_t n = 10;

    auto randomVector = generateRandomVector<int>(n);
    auto sortedVector = generateSortedVector<int>(n);
    auto reverseSortedVector = generateSortedReverseVector<int>(n);

    for (int num : randomVector) std::cout << num << " ";
    std::cout << "\n";

    for (int num : sortedVector) std::cout << num << " ";
    std::cout << "\n";

    for (int num : reverseSortedVector) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
