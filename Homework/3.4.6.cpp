// 包含两种I/0库，可以使用任一种输入输出方式
#include <cstdio>
#include <iostream>
using namespace std;

// 定义函数 digitR
int digitR(int N, int M) {
    // 将数字右移 M-1 位，然后取个位数
    for (int i = 1; i < M; ++i) {
        N /= 10;
    }
    return N % 10;
}

int main() {
    int N, M;
    // 输入两个整数 N 和 M
    cin >> N >> M;
    // 输出结果
    cout << digitR(N, M) << endl;
    return 0;
}