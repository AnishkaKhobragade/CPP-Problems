/*
Name - Anishka Khobragade
NetID - jk9443
*/

#include <iostream>
using namespace std;

int main()
{
    int random = rand() % 100;
    int guess;
    cout << random;
    cout << "Welcome to Random Guessing Number Game, guess a number between 0 and 100: \n";
    do
    {
        cin >> guess;
        if (guess > random)
        {
            cout << "Too High, try again. \n";
        }
        if (guess < random)
        {
            cout << "Too Low, try again. \n";
        }
    } while (guess != random);

    cout << "CONGRATULATIONS! You've guessed the number!";

    return 0;
}