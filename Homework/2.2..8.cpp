#include <iostream>
#include <string>

using namespace std; // 添加命名空间

// 检查数字是否满足高位数字小于低位数字的条件
bool isValid(int num) {
    string str = to_string(num);
    for (size_t i = 1; i < str.size(); ++i) {
        if (str[i - 1] >= str[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 1; i <= 10000; ++i) {
        if (isValid(i)) {
            cout << i << " ";
        }
    }
    return 0;
}