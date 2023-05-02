#include <iostream>
using namespace std;

int main() {
    int minutes = 5;
    float calories_burnt_per_min = 3.6;
    float calories_burnt_total;

    while (minutes <= 50) {
        calories_burnt_total = minutes * calories_burnt_per_min;
        cout << "Calories burned in " << minutes << " minutes: " << calories_burnt_total << endl;
        minutes += 5;
    }
    return 0;
}