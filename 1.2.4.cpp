#include <iostream>
#include <iomanip>

int main() 
{
    int month, rooms;
    std::cin >> month >> rooms;

    const double basePrice = 398.0;
    double discount = 0.0;

    if (month >= 7 && month <= 9) 
    { // 旅游季节
        if (rooms < 20) 
        {
            discount = 0.15; // 15% 折扣
        } else 
        {
            discount = 0.30; // 30% 折扣
        }
    } 
    else 
    { // 非旅游季节
        if (rooms < 20) 
        {
            discount = 0.30; // 30% 折扣
        } else 
        {
            discount = 0.50; // 50% 折扣
        }
    }

    double total = basePrice * rooms * (1 - discount);
    std::cout << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}