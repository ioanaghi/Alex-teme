#include <iostream>
using namespace std;
bool Prim(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main() {
    int n = 17;
    cout << "Numarul este prim: " << (Prim(n) ? "DA" : "NU") << endl;
    return 0;
}
