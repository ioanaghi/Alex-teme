#include <iostream>
using namespace std;
int DIVprop(int n) {
    int S = 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            S = S + i;
    return S;
        
}
int main()
{
    int n;
    cin >> n;
    cout << DIVprop(n);
    return 0;
}

