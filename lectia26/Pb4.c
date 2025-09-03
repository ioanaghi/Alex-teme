#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char n[101];
    bool ok = 1;
    cin.getline(n, 101);
    for (int i = 0; i < strlen(n); i++)
        if (n[i] != n[strlen(n) - 1 - i])
            ok = 0;
    if (ok == 1)
        cout << "Este palindrom";
    else
        cout << "nu e palindrom";
    return 0;
}

