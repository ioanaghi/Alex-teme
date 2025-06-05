#include <iostream>
using namespace std;
int IMP(int n) {
    if (n == 0)
        return 0;
    else {
        if (n % 10 % 2 != 0)
            return 1 + IMP(n / 10);
        else
            return IMP(n / 10);
    }
}
int main()
{
    int n, m;
    cin >> n;
    cout << IMP(n) << endl;
    return 0;
}

