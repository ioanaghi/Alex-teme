#include <iostream>
using namespace std;
int sumCifPare(int n) {
    int s = 0;
    while (n > 0) {
        int c = n % 10;
        if (c % 2 == 0) s += c;
        n /= 10;
    }
    return s;
}
int main() {
    int n = 2486;
    cout << "Suma cifrelor pare: " << sumCifPare(n) << endl;
    return 0;
}
