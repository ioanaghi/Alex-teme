#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char v[256];
    cin.getline(v, 256);
    char *p = strtok(v, " ");
    char min[256];
    int minlen;
    strcpy(min, p);
    minlen = strlen(min);
    while (p != NULL) {
        if (strlen(p) < minlen) {
            minlen = strlen(p);
            strcpy(min, p);
        }
        p = strtok(NULL, " ");
    }
    cout << min;


    return 0;
    
}

