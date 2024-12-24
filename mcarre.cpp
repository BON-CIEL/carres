#include "carre.h"
#include <iostream>

using namespace std;

int main() {
	locale::global(locale("fr-FR"));
	CCarre c1;
	c1.Setsx(1);
	c1.Setsy(3);
	c1.Setcote(5);
	c1.Afficher();
}