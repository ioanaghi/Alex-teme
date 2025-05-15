#include <iostream>
using namespace std;
int cmmdc(int a, int b) {
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    int a = 24, b = 36;
    cout << "Cel mai mare divizor comun: " << cmmdc(a, b) << endl;
    return 0;
}
