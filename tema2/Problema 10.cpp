#include <iostream>
using namespace std;

bool ePrim(int n) {
    if (n < 2) return false;
    for (int d = 2; d * d <= n; d++)
        if (n % d == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << (ePrim(n) ? "DA" : "NU");
    return 0;
}
