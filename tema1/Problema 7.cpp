#include <iostream>
using namespace std;
bool perfect(int n) {
    int s = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0) s += i;
    return s == n;
}
int main() {
    int n = 28;
    cout << "Numarul este perfect: " << (perfect(n) ? "DA" : "NU") << endl;
    return 0;
}
