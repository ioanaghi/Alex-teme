#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char n[101];
    bool ok = 1;
    cin.getline(n, 101);
    for (int i = 0; i < strlen(n); i++)
        if (n[i] == 'n')
            n[i] = '-';
    cout << n;
    return 0;
}

