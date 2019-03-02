//============================================================================
// Name        : Ex1.cpp
// Author      : Philippe Boisseau
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sphere.h"

using namespace std;

int main()
{
	double rayon1;

	cout << "Entrer le rayon d'une Sphere" << endl;
	cin >> rayon1;

	Sphere boule = Sphere(rayon1);

	cout << boule.reqVolumeFormate();

	boule.asgRayon(5);

	cout << boule.reqVolumeFormate();
}
