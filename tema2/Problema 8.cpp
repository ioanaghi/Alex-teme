#include <iostream>
#include <cmath>
using namespace std;

void patratePerfecte(int n) {
    for (int i = 1; i * i <= n; i++)
        cout << i * i << " ";
}

int main() {
    int n;
    cin >> n;
    patratePerfecte(n);
    return 0;
}
