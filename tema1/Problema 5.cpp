#include <iostream>
using namespace std;
bool crescator(int n) {
    int p = 10;
    while (n > 0) {
        int c = n % 10;
        if (c > p)
            return false;
        p = c;
        n /= 10;
    }
    return true;
}
int main() {
    int n = 1235;
    cout << "Cifre in ordine crescatoare: " << (crescator(n) ? "DA" : "NU") << endl;
    return 0;
}
