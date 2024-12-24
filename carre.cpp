#include "carre.h"
#include <iostream>

using namespace std;

// Affecte une nouvelle valeur à sx
void CCarre::Setsx(int sx1) {
    sx = sx1;
}

// Affecte une nouvelle valeur à sy
void CCarre::Setsy(int sy1) {
    sy = sy1;
}

// Affecte une nouvelle valeur à cote
void CCarre::Setcote(int cote1) {
    cote = cote1;
}

// Affiche les caractéristiques du carré
void CCarre::Afficher() {
    cout << "Caractéristiques du carré:" << endl;
    cout << "Sommet supérieur gauche (sx, sy): (" << sx << ", " << sy << ")" << endl;
    cout << "Longueur du côté: " << cote << " pixels" << endl;
}

int CCarre::Getsx() {
    return sx;
}

// Retourne la valeur de sy
int CCarre::Getsy() {
    return sy;
}

// Retourne la longueur du côté du carré
int CCarre::GetCote() {
    return cote;
}