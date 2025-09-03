#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int par = 0;
    char n[101];
    cin.getline(n, 101);
    for (int i=0; i < strlen(n); i++)
        if (strchr("AEIOUaeiou", n[i]) != NULL)
            par++;
    cout << par;
    return 0;
}

