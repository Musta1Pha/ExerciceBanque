#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "Compte.h"
#include <string>
#include <vector>

using namespace std;
class Compte;
class Client
{
    private:
     string Nom;
     string Prenom;
     int Age;
     vector<Compte*> CompteClient;

    public:
     Client(string Nom,string Prenom,int Age);
     void Afficher()const;
     void AjouterCompte(Compte* c);
     virtual ~Client();

};

#endif // CLIENT_H
