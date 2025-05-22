#include <iostream>
using namespace std;

int invers(int n) {
    int m = 0;
    while (n) {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

int main() {
    int n;
    cin >> n;
    cout << invers(n);
    return 0;
}
