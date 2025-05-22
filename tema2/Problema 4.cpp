#include <iostream>
using namespace std;

void matriceIdentitate(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << (i == j ? 1 : 0) << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    matriceIdentitate(n);
    return 0;
}
