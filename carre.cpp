#include "carre.h"
#include <iostream>

using namespace std;

// Affecte une nouvelle valeur � sx
void CCarre::Setsx(int sx1) {
    sx = sx1;
}

// Affecte une nouvelle valeur � sy
void CCarre::Setsy(int sy1) {
    sy = sy1;
}

// Affecte une nouvelle valeur � cote
void CCarre::Setcote(int cote1) {
    cote = cote1;
}

// Affiche les caract�ristiques du carr�
void CCarre::Afficher() {
    cout << "Caract�ristiques du carr�:" << endl;
    cout << "Sommet sup�rieur gauche (sx, sy): (" << sx << ", " << sy << ")" << endl;
    cout << "Longueur du c�t�: " << cote << " pixels" << endl;
}