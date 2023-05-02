#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    float score1, score2, score3, average;
    
    do {
        // Prompt the user for three scores
        cout << "Enter three scores: ";
        cin >> score1 >> score2 >> score3;
        
        // Calculate the average score
        average = (score1 + score2 + score3) / 3.0;
        cout << "The average score is " << average << endl;
        
        // Ask the user if they want to continue
        cout << "Do you want to average another set of scores? (Yes/No): ";
        cin >> input;
        
        do {
            cout << "Please enter Yes or No only. \n";
            cin >> input;
        } while (input != "No" && input != "Yes");
    }
    while (input == "Yes");

    return 0;
}

