#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char n[101];
    bool ok = 1;
    int nrSpat = 0;
    cin.getline(n, 101);
    for (int i = 0; i < strlen(n); i++)
        if (n[i] == ' ')
            nrSpat++;
    cout << nrSpat + 1;
    return 0;
}

