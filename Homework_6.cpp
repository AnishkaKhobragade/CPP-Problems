/*
Using reference variables

int doSomething(int& x, int& y) {
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}

Using pointers 

int doSomething(int* x, int* y) {
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

*/

#include <iostream>

using namespace std;

int doSomething(int& x, int& y) {
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}

int main() {
    int a = 2, b = 3;
    cout << "a = " << a << ", b = " << b << endl;
    int result = doSomething(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    cout << "result = " << result << endl;
    return 0;
}
