#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the number of digits in an integer
int numberDigit(int n) {
    int digit = 0;
    while (n > 0) {
        n /= 10;
        digit++;
    }
    return digit;
}

// Function to move the last digit of a number to the highest position
long long changeNumber(long long n) {
    int lastDigit = n % 10;
    n /= 10;
    int numDigits = numberDigit(n) + 1;
    return lastDigit * pow(10, numDigits - 1) + n;
}

int main() {
    int x = 18; // Start with the smallest number ending in 8
    while (true) {
        int y = numberDigit(x);
        long long z = changeNumber(x);
        if (z == (x << 2)) { // Check if the new number is 4 times the original
            cout << x << endl;
            break;
        }
        x += 10; // Increment by 10 to ensure the last digit remains 8
    }
    return 0;
}