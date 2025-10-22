#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    // 读入三个整数
    cin >> a >> b >> c;

    // 交换值
    int temp = a;
    a = b;
    b = c;
    c = temp;

    // 输出结果
    cout << a << " " << b << " " << c << endl;

    return 0;
}