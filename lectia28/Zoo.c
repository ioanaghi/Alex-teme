#include <iostream>
using namespace std;

struct Animal {
    string nume;
    int varsta;
    int nrPicioare;
    int sanatate; 
};

struct Zona {
    string tipAnimal;
    int nrAnimale;
    Animal animale[5]; 
};

struct Angajat {
    string nume;
    int varsta;
    int salariu;
};

struct Vizitator {
    string nume;
    int varsta;
    string sex;
    int nrBilete;
};

struct Zoo {
    Zona zone[3];
    Angajat angajati[2];
    int nrBileteVandute;
    Vizitator vizitatori[3];
    int pretBilet;
};

void afisareAngajat(Angajat a) {
    cout << "Angajatul " << a.nume << " are " << a.varsta
        << " ani si un salariu de " << a.salariu << " lei." << endl;
}

void costBilete(Vizitator v, int pretBilet) {
    int total = v.nrBilete * pretBilet;
    cout << "Vizitatorul " << v.nume << " a cumparat " << v.nrBilete
        << " bilete pentru un total de " << total << " lei." << endl;
}

void afisareNrZone(Zoo z) {
    cout << "Gradina zoologica are " << 3 << " zone." << endl;
}

void afisareZona(Zona z) {
    cout << "Zona cu " << z.tipAnimal << " are " << z.nrAnimale << " animale:" << endl;
    for (int i = 0; i < z.nrAnimale; i++) {
        cout << " - " << z.animale[i].nume << ", varsta: " << z.animale[i].varsta
            << ", picioare: " << z.animale[i].nrPicioare
            << ", sanatate: " << (z.animale[i].sanatate ? "sanatos" : "bolnav") << endl;
    }
}

int main() {
    Zoo zoo1;
    zoo1.pretBilet = 20;
    zoo1.nrBileteVandute = 0;

    zoo1.zone[0].tipAnimal = "zebra";
    zoo1.zone[0].nrAnimale = 2;
    zoo1.zone[0].animale[0] = { "Zebra1", 5, 4, 1 };
    zoo1.zone[0].animale[1] = { "Zebra2", 7, 4, 1 };

    zoo1.zone[1].tipAnimal = "girafa";
    zoo1.zone[1].nrAnimale = 2;
    zoo1.zone[1].animale[0] = { "Girafa1", 6, 4, 1 };
    zoo1.zone[1].animale[1] = { "Girafa2", 9, 4, 0 };

    zoo1.zone[2].tipAnimal = "cangur";
    zoo1.zone[2].nrAnimale = 3;
    zoo1.zone[2].animale[0] = { "Cangur1", 4, 2, 1 };
    zoo1.zone[2].animale[1] = { "Cangur2", 3, 2, 1 };
    zoo1.zone[2].animale[2] = { "Cangur3", 5, 2, 0 };

    zoo1.angajati[0] = { "Andrei", 30, 3500 };
    zoo1.angajati[1] = { "Maria", 27, 3200 };

    zoo1.vizitatori[0] = { "Ioana", 25, "F", 2 };
    zoo1.vizitatori[1] = { "Mihai", 19, "M", 3 };
    zoo1.vizitatori[2] = { "Elena", 40, "F", 1 };

    cout << "Angajati: " << endl;
    afisareAngajat(zoo1.angajati[0]);
    afisareAngajat(zoo1.angajati[1]);
    cout << endl;

    cout << "Vizitatori: " << endl;
    costBilete(zoo1.vizitatori[0], zoo1.pretBilet);
    costBilete(zoo1.vizitatori[1], zoo1.pretBilet);
    cout << endl;

    cout << "Zone: " << endl;
    afisareNrZone(zoo1);
    for (int i = 0; i < 3; i++) {
        afisareZona(zoo1.zone[i]);
        cout << endl;
    }

    return 0;
}
