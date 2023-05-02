/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

const int NUM_PLAYERS = 5;
const int NUM_SEASONS = 5;

// sum of all the scores
int findSum(int playerScores[][NUM_SEASONS], int playerIndex) {
    int sum = 0;
    for(int season = 0; season < NUM_SEASONS; season++) {
        sum += playerScores[playerIndex][season];
    }
    return sum;
}

// finds the average
float findAverage(int playerScores[][NUM_SEASONS], int playerIndex) {
    return (float)findSum(playerScores, playerIndex) / NUM_SEASONS;
}

// converting the result in file 
void writeResultsToFile(int playerScores[][NUM_SEASONS]) {
    ofstream outputFile("Output.txt");
    if(outputFile.is_open()) {
        for(int playerIndex = 0; playerIndex < NUM_PLAYERS; playerIndex++) {
            float playerAverage = findAverage(playerScores, playerIndex);
            outputFile << "Player " << playerIndex+1 << "'s Average score is " << playerAverage << endl;
        }
        outputFile.close();
    }
    else {
        cout << "Error: Unable to open file" << endl;
    }
}

int main() {
    int playerScores[NUM_PLAYERS][NUM_SEASONS] = {
        {1,2,3,4,5},
        {2,3,4,5,6},
        {10,2,3,5,8},
        {19,2,1,8,3},
        {9,2,1,8,3}
    };
    writeResultsToFile(playerScores);
    return 0;
}
