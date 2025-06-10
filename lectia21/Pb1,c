#include <iostream>
using namespace std;
bool TotImp(int n) {
    bool ok = 1;
    if (n == 0)
        return 1;
    else {
        if (n % 10 % 2 == 0)
            return 0;
        if (n % 10 % 2 != 0)
            TotImp(n / 10);
    }
        
}
int main()
{
    int n;
    cin >> n;
    if (TotImp(n))
        cout << "Da";
    else
        cout << "Nu";
    return 0;
}

