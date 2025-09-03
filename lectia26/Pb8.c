#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[101], b[101];
    int j = 0;
    cin.getline(a, 101);
    for (int i = 0; i < strlen(a); i++)
        if (strchr("AEIOUaeiou", a[i]) == NULL) {
            if (a[i] == 'n') {
                b[j] = '!';
                j++;
            }
            else {
                b[j] = a[i];
                j++;
            }
        }
    b[j] = '\0';
    cout << b;
    return 0;
}

