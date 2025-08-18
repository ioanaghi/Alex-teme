#include <iostream>
using namespace std;
int main()
{
    int X, sum = 0, prod = 1;
    cin >> X;
    while (X > 0) {
        sum = sum + X % 10;
        prod = prod * (X % 10);
        X = X / 10;
    }
    cout << sum << endl;
    cout << prod << endl;
    return 0;
}

