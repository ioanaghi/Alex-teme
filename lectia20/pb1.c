#include <iostream>
using namespace std;
int SGaus(int n) {
    if (n == 0)
        return 0;
    else
        return SGaus(n - 1) + n;
}
int main()
{
    int n;
    cin >> n;
    cout << SGaus(n);
    return 0;
}