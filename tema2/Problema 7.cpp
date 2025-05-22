#include <iostream>
using namespace std;

bool ePalindrom(int n) {
    int inv = 0, cop = n;
    while (n) {
        inv = inv * 10 + n % 10;
        n /= 10;
    }
    return inv == cop;
}

int main() {
    int n;
    cin >> n;
    cout << (ePalindrom(n) ? "DA" : "NU");
    return 0;
}
