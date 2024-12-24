#include "carre.h"
#include <iostream>

using namespace std;

int main() {
    locale::global(locale("fr-fr"));
    CCarre carre1; // Constructeur par défaut

    // Affichage des carrés
    cout << "Carre 1 (par défaut):" << endl;
    carre1.Afficher();
}