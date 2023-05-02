//Q2
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    float end = 100;


    for (int i = 1; i <= end; i++) {
        sum += i;
    }

    float avg = sum/end;
    
    cout << sum << " is the sum of first 100 natural numbers." << endl;
    cout << avg << " is the average of the first 100 natural numbers.";

    return 0;
}