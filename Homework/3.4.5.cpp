#include <iostream>
#include <string>
using namespace std;

string Int2HexString(int num) {
    if (num == 0) return "0";

    string hexString;
    const string hexDigits = "0123456789ABCDEF";
    bool isNegative = num < 0;

    if (isNegative) {
        num = -num;
    }

    while (num > 0) {
        int remainder = num % 16;
        hexString = hexDigits[remainder] + hexString;
        num /= 16;
    }

    if (isNegative) {
        hexString = "-" + hexString;
    }

    return hexString;
}

int main() {
    int n;
    cin >> n;
    cout << Int2HexString(n) << endl;
    return 0;
}