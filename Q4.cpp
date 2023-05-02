#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, number;
    cout << "\nEnter numbers: ";
    cin >> n;
    while (n > 0)
    {
        cin >> number;
        if(number < 0)
            break;
        sum += number;
        n--;
    }
    cout << "\nSum is: " << sum << endl;
    return 0;
}