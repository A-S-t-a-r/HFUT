#include <iostream>
using namespace std;

// 判断是否为素数的函数
bool primenumber(int n) {
    if (n <= 1) return false; // 1 不是素数
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // 如果能被 i 整除，则不是素数
    }
    return true; // 是素数
}

int main() {
    int n;
    cin >> n; // 输入一个正整数

    // 调用 primenumber 函数判断是否为素数
    if (primenumber(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}