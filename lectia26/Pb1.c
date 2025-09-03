#include <iostream>
using namespace std;
int Sumapare(int n) {
    if (n == 2)
        return 2;
    if (n % 2 == 0)
        return n + Sumapare(n - 2);
    else
        return Sumapare(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << Sumapare(n);
    return 0;
}
