#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

// 定义递归函数，计算整数中所有位数的值之和
int dfs(int n) {
    if (n == 0) return 0; // 递归终止条件
    return abs(n % 10) + dfs(n / 10); // 取当前位的绝对值，加上剩余部分的递归结果
}

int main() {
    int n;
    cin >> n;
    cout << dfs(n);
    return 0;
}