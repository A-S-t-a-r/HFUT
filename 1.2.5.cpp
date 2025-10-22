#include <iostream>
using namespace std;

int main() 
{
    int n;
    int count=0;
    cin >> n;

    if (n == 0) 
    {
        count=1;
    }
    else

    do 
    {
        n /= 10;
        count++;
    } while (n != 0);

    cout << count << endl;

    return 0;
}