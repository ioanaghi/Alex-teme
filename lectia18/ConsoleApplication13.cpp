#include <iostream>
using namespace std;

void descPrim(int n) {
    int d = 2;
    bool ok = 0;
    int nr;
    while (n != 1) {
        nr = 0;
        while (n % d == 0) {
            nr++;
            n = n / d;
        }
        if (nr >= 1 && ok == 1) {
            cout << "*";
        }
        if (nr > 1) {
            ok = 1;
            cout << d << "^" << nr;
        }
        else
            if (nr == 1) {
                cout << d;
                ok = 1;
            }
        if (d == 2)
            d++;
        else
            d = d + 2;
    }
}
int main() {
    int n;
    cin >> n;
    descPrim(n);
    return 0;
}
