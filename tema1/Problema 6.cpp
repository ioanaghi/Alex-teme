#include <iostream>
using namespace std;
bool palindrom(int n) {
    int m = n, inv = 0;
    while (m > 0) {
        inv = inv * 10 + m % 10;
        m /= 10;
    }
    return n == inv;
}
int main() {
    int n = 1221;
    cout << "Numarul este palindrom: " << (palindrom(n) ? "DA" : "NU") << endl;
    return 0;
}
