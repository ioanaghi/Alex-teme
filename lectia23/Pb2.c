#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int nr = 0;
    char v[255];
    cin.getline(v, 255);
    for (int i = 0; i < strlen(v); i++)
        if (strchr("aeiouAEIOU", v[i]) != NULL)
            nr++;
    cout << nr;
        
}

