#include <iostream>
#include <string>

using namespace std;

int main() {
    const int NUM_SALSAS = 5;
    string salsaNames[NUM_SALSAS] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int salsaSales[NUM_SALSAS];

    // Prompt user to enter sales for each salsa type
    for (int i = 0; i < NUM_SALSAS; i++) {
        cout << "Enter sales for " << salsaNames[i] << " salsa: ";
        cin >> salsaSales[i];
    }

    // Calculate total sales
    int totalSales = 0;
    for (int i = 0; i < NUM_SALSAS; i++) {
        totalSales += salsaSales[i];
    }

    // Find highest and lowest selling products
    int highestSales = salsaSales[0];
    int lowestSales = salsaSales[0];
    string highestName = salsaNames[0];
    string lowestName = salsaNames[0];
    for (int i = 1; i < NUM_SALSAS; i++) {
        if (salsaSales[i] > highestSales) {
            highestSales = salsaSales[i];
            highestName = salsaNames[i];
        }
        if (salsaSales[i] < lowestSales) {
            lowestSales = salsaSales[i];
            lowestName = salsaNames[i];
        }
    }

    // Print sales report
    cout << endl;
    for (int i = 0; i < NUM_SALSAS; i++) {
        cout << salsaNames[i] << " salsa: " << salsaSales[i] << endl;
    }
    cout << endl;
    cout << "Total sales: " << totalSales << endl;
    cout << "Highest selling product: " << highestName << " salsa (" << highestSales << " jars)" << endl;
    cout << "Lowest selling product: " << lowestName << " salsa (" << lowestSales << " jars)" << endl;

    return 0;
}
