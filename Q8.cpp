//Q8
#include <iostream>
#include <algorithm>  
using namespace std;

// lowest 
float findLowestScore(float scores[], int size) {
    float lowest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    cout << lowest <<endl;
    return lowest;
}

// highest
float findHighestScore(float scores[], int size) {
    float highest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    cout << highest <<endl;
    return highest;
}

//average
float calculateAverage(float scores[], int size) {
    float sum = 0;
    for (int i = 0; i <= size-1; i++) {
        sum =sum+ scores[i];
    }
    cout << sum << endl;
    sum -= findHighestScore(scores, size) + findLowestScore(scores, size);
    cout << sum << endl;
    return sum / 3.0;
}

int main() {
    const int numJudges = 5;
    float scores[numJudges];

    //scores of the 5 judges
    for (int i = 0; i < numJudges; i++) {
        cout << "Enter the score of judge " << i + 1 << ": ";
        cin >> scores[i];
    }

    // Calculate the average
    float average = calculateAverage(scores, numJudges);

    // result
    cout << "The final score is: " << average << endl;
    return 0;
}