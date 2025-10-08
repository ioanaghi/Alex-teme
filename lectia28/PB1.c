#include <iostream>
using namespace std;
struct om {
    string culoare_Par;
    int varsta;
    int inaltime;
    string nume;
}Alex;
void diferenta(om nume1, om nume2) {
    if (nume1.inaltime > nume2.inaltime)
        cout << nume1.nume << " e mai inalt cu " << nume1.inaltime - nume2.inaltime << " cm";
    else
        cout << nume2.nume << " e mai inalt cu " << nume2.inaltime - nume1.inaltime << " cm";
}
void afisare(om nume) {
    cout << "Personajul: " << nume.nume << " are:" << nume.varsta << " ani" << " culoarea parului: " << nume.culoare_Par << " si inaltimea de: " << nume.inaltime;
}
int main()
{
    om Andrei = { "castaniu", 17, 180, "Andrei" };
    om Ioana = { "saten", 21, 165, "Ioana" };
    Alex.culoare_Par = "blond";
    Alex.varsta = 17;
    Alex.inaltime = 182;
    Alex.nume = "Alex";
    afisare(Alex);
    cout << endl;
    afisare(Andrei);
    cout << endl;
    diferenta(Alex, Andrei);
    cout << endl;
    diferenta(Alex, Ioana);
    
    return 0;
}

