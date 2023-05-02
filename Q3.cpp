//Q3
#include <iostream>
using namespace std;
int main ()
{
	int num1, num2, num3;
	cout << "Enter number 1: ";
    cin >> num1;
	cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;

    if (num1 > num2)
    {
        if (num1 > num3){
            cout << num1 << " is the largest number." << endl;
            if (num2 > num3)
                cout << num3 << " is the smallest number.";
            else
                cout << num2 << " is the smallest number.";
        }
    }
    if (num2 > num3)
    {
        if (num2 > num1){
            cout << num2 << " is the largest number." << endl;
            if (num3 > num1)
                cout << num1 << " is the smallest number.";
            else
                cout << num3 << " is the smallest number.";
        }
    }
    if (num3 > num1)
    {
        if (num3 > num2){
            cout << num3 << " is the largest number." << endl;
            if (num1 > num2)
                cout << num2 << " is the smallest number.";
            else
                cout << num1 << " is the smallest number.";
        }
    }
    return 0;
}