#include <iostream>
using namespace std;

int dublareImp(int n) {
    int r = 0, p = 1;
    while (n) {
        int c = n % 10;
        if (c % 2 == 1) {
            r += c * p;
            p *= 10;
            r += c * p;
        }
        else {
            r += c * p;
        }
        p *= 10;
        n /= 10;
    }
    return r;
}

int main() {
    int n;
    cin >> n;
    cout << dublareImp(n);
    return 0;
}
