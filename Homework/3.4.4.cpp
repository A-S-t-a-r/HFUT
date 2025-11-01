#include<iostream>
using namespace std;

double HnFuction_recursion(double x, int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 2 * x;
    } else {
        return 2 * x * HnFuction_recursion(x, n - 1) - 2 * (n - 1) * HnFuction_recursion(x, n - 2);
    }
}