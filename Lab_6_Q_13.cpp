#include <iostream>
#include <iomanip>

void sortAscending(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + j) < *(arr + i)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

double calculateAverage(int* arr, int size) {
    double sum = 0;
    int highest = *arr;
    for (int i = 1; i < size; i++) {
        sum += *(arr + i);
        if (*(arr + i) > highest) {
            highest = *(arr + i);
        }
    }
    return (sum - highest) / (size - 1);
}

int main() {
    int size;
    std::cout << "Enter the number of test scores: ";
    std::cin >> size;
    
    int* arr = new int[size];
    
    std::cout << "Enter the test scores:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> *(arr + i);
        while (*(arr + i) < 0) {  // check for negative input
            std::cout << "Invalid input. Enter a positive test score: ";
            std::cin >> *(arr + i);
        }
    }
    
    sortAscending(arr, size);
    
    std::cout << "Sorted test scores:\n";
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
    
    double average = calculateAverage(arr, size);
    std::cout << "Average test score (excluding the highest score): "
              << std::fixed << std::setprecision(2) << average << std::endl;
    
    delete[] arr;
    return 0;
}
