#include <iostream>

using namespace std;

int main()
{
    const int shares = 1000;

    const float commission = 0.02;
    const float price_per_share_paid = 45.50;
    const float price_per_share_sold = 56.90;
    
    float total_stock_purchase;
    float paid_share_commission;
    float sold_share_commission;
    float stock_sold_for;
    float total_profit;

    total_stock_purchase = shares * price_per_share_paid;
    paid_share_commission = total_stock_purchase * commission;
    stock_sold_for = shares * price_per_share_sold;
    sold_share_commission = stock_sold_for * commission; 
    total_profit = (stock_sold_for - (paid_share_commission + sold_share_commission)) - commission;

    std::cout << "The amount of money Joe paid for the stock: $" << total_stock_purchase << std::endl;

    std::cout << "The amount of commission Joe paid his broker when he bought the stock: $" << paid_share_commission << std::endl;

    std::cout << "The amount that Joe sold the stock for: $" << stock_sold_for << std::endl;

    std::cout << "The amount of commission Joe paid his broker when he sold the stock: $" << sold_share_commission << std::endl;

    std::cout << "The amount of profit that Joe made after selling his stock and paying the two commissions to his broker: $" << total_profit << std::endl;

    return 0;
}