#Q7
#include <iostream>

using namespace std;

int main()
{
    int total_hours_worked;
    int overtime_hours = 0;
    int hourly_pay = 15;
    int overtime_pay = 20;
    int amount_paid_hourly = 0;
    int amount_paid_overtime = 0;
    
    
    std::cout << "How many hours did you work?" << std::endl;
    std::cin >> total_hours_worked;
    
    if (total_hours_worked <= 40){
        amount_paid_hourly = total_hours_worked * hourly_pay;
        cout << "Your base pay was: $" << amount_paid_hourly << endl;
        cout << "Your overtime pay was: $" << amount_paid_overtime << endl;
        int total_pay = amount_paid_hourly + amount_paid_overtime;
        cout << "Your total pay is: $" << total_pay << endl;
    }
    else{
        overtime_hours = total_hours_worked - 40;
        amount_paid_overtime = overtime_hours * overtime_pay;
        cout << "Your base pay was: $600" << endl;
        cout << "Your overtime pay was: $" << amount_paid_overtime << endl;
        int total_pay = 600 + amount_paid_overtime;
        cout << "Your total pay is: $" << total_pay << endl;
    }
    
    return 0;
}