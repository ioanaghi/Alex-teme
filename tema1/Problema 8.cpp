#include <iostream>
using namespace std;
bool putereDoi(int n) {
    if (n < 1) return false;
    while (n > 1) {
        if (n % 2 != 0) return false;
        n /= 2;
    }
    return true;
}
int main() {
    int n = 16;
    cout << "Este putere a lui doi: " << (putereDoi(n) ? "DA" : "NU") << endl;
    return 0;
}
