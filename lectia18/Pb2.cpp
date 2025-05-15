#include <iostream>
using namespace std;
bool nrPerfect(int n) {
    int S = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            S = S + i;
    }
    if (n == S)
        return 1;
    else
        return 0;
}
int main() {
    int n;
    cin >> n;
    if (nrPerfect(n) == 1)
        cout << "Da";
    else
        cout << "NU";
    return 0;
}
