#include <iostream>
using namespace std;
int sumaCifrelor(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main() {
    int n = 563;
    cout << "Suma cifrelor: " << sumaCifrelor(n) << endl;
    return 0;
}
