#include <iostream>
using namespace std;
int invers(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}
int main() {
    int n = 4321;
    cout << "Invers: " << invers(n) << endl;
    return 0;
}
