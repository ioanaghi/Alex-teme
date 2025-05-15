#include <iostream>
using namespace std;
int factorial(int n) {
    int p = 1;
    for (int i = 2; i <= n; i++)
        p = p * i;
    return p;
}
int main() {
    int n = 5;
    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}
