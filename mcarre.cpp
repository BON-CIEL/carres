#include "carre.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    locale::global(locale("fr-fr"));
    CCarre carre1; // Constructeur par d�faut

    // Affichage des carr�s
    cout << "Carre 1 (par d�faut):" << endl;
    carre1.Afficher();

    // Tableau de 4 carr�s
    CCarre tabCarres[4] = {
        CCarre(),
        CCarre(),
        CCarre(),
        CCarre()
    };

    for (int i = 0; i < 4; i++) {
        const CCarre e = tabCarres[i];
        std::cout << e << std::endl;
    }
}