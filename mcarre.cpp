#include "carre.h"
#include <iostream>

using namespace std;

int main() {
    locale::global(locale("fr-fr"));
    CCarre carre1; // Constructeur par d�faut

    // Affichage des carr�s
    cout << "Carre 1 (par d�faut):" << endl;
    carre1.Afficher();
}