//============================================================================
// Name        : Ex2.cpp
// Author      : Philippe Boisseau
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	cout << "Entrer votre nom" << endl;

	string nom;
	char buffer[256];
	cin.getline(buffer,256);
	nom = buffer;

	cout << "Entrer votre prenom" << endl;

	string prenom;
	cin.getline(buffer,256);
	prenom = buffer;

	cout << "Entrer votre date de naissance format (yyyy-mm-dd)" << endl;

	string date;
	cin.getline(buffer,256);
	date = buffer;

	stringstream chaine(date);
	string annee;
	string mois;
	string jour;

	chaine.getline(buffer, 256, '-');
	annee = buffer;

	chaine.getline(buffer, 256, '-');
	mois = buffer;

	chaine.getline(buffer, 256, '-');
	jour = buffer;

	cout << prenom.substr(0,2) << nom.substr(0,3) << jour << mois << endl;

	return 0;
}
