#include <iostream>
using namespace std;
int main()
{
    cout << "Alege varianta: " << endl;
    cout << "1)Din numar -> in caracter" << endl;
    cout << "2) Din caracter -> cod ascii" << endl;
    int var;
    cin >> var;
    if (var == 1) {
        int nr;
        cout << "Introdu numarul: ";
        cin >> nr;  
        char caracter = nr;
        cout << "Caracterul introdus este: " << caracter;
    }
    else
        if (var == 2) {
            char Caracter;
            cout << "Introdu caracterul: ";
            cin >> Caracter;
            int Nr = Caracter;
            cout << "Codul ascii pt caracterul introdus este: " << Nr;
        }
    return 0;
}
