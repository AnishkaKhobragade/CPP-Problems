#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void sortScores(int* scores, int size);
double calculateAverage(int* scores, int size);

int main() {
    int size;

    // Get the number of test scores to enter
    cout << "How many test scores do you want to enter? ";
    cin >> size;

    // Dynamically allocate an array to hold the scores
    int* scores = new int[size];

    // Get the test scores
    for (int i = 0; i < size; i++) {
        cout << "Enter score " << i + 1 << ": ";
        cin >> *(scores + i);
        while (*(scores + i) < 0) { // Negative scores are not allowed
            cout << "Enter a non-negative score: ";
            cin >> *(scores + i);
        }
    }

    // Sort the scores
    sortScores(scores, size);

    // Calculate the average score
    double average = calculateAverage(scores, size);

    // Display the sorted scores and average
    cout << "Sorted scores:" << endl;
    for (int i = 0; i < size; i++) {
        cout << *(scores + i) << " ";
    }
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Average score: " << average << endl;

    // Deallocate the dynamically allocated memory
    delete[] scores;
    scores = nullptr;

    return 0;
}

// Function that sorts the scores in ascending order
void sortScores(int* scores, int size) {
    bool swap;
    int temp;
    do {
        swap = false;
        for (int i = 0; i < size - 1; i++) {
            if (*(scores + i) > *(scores + i + 1)) {
                temp = *(scores + i);
                *(scores + i) = *(scores + i + 1);
                *(scores + i + 1) = temp;
                swap = true;
            }
        }
    } while (swap);
}

// Function that calculates the average score
double calculateAverage(int* scores, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(scores + i);
    }
    return static_cast<double>(total) / size;
}
