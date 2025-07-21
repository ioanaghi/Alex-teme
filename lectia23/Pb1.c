#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char v[101];
    cin.getline(v, 101);
    strcpy(v + 7, v + 8);
    cout << v;
    return 0;
}
