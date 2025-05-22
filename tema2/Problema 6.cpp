#include <iostream>
using namespace std;

void numaraCifre(int n, int& pare, int& impare) {
    pare = impare = 0;
    while (n) {
        if ((n % 10) % 2 == 0) pare++;
        else impare++;
        n /= 10;
    }
}

int main() {
    int n, p, i;
    cin >> n;
    numaraCifre(n, p, i);
    cout << "Pare: " << p << ", Impare: " << i;
    return 0;
}
