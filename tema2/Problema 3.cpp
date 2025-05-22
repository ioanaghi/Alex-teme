#include <iostream>
using namespace std;

void matriceCirculara(int n) {
    for (int i = 0; i < n; i++) {
        int val = n - i;
        for (int j = 0; j < n; j++) {
            cout << val << " ";
            val++;
            if (val > n) val = 1;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    matriceCirculara(n);
    return 0;
}
