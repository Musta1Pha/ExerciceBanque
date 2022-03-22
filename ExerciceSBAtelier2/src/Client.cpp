#include "Client.h"
#include <assert.h>

Client::Client(string Nom,string Prenom,int Age)
{
    this->Nom = Nom;
    this->Prenom = Prenom;
    this->Age = Age;
}

void Client::Afficher()const
{
    std::cout<<"Nom : "<<this->Nom<<std::endl;
    std::cout<<"Prenom : "<<this->Prenom<<std::endl;
    std::cout<<"Age : "<<this->Age<<std::endl;
}

void Client::AjouterCompte(Compte* c)
{
    this->CompteClient.push_back(c);
}

/*void Client::SupprimerCompte(Compte* c)
{
    assert(this->Compte::CheckSolde(c)):
    for(int i=0;i<this->CompteClient.size();i++){
        if(&(this->CompteClient[i]) == c){
            this->CompteClient.erase(i)
    }
    }
}*/

Client::~Client()
{
    for(int i=0;i<this->CompteClient.size();i++){
        delete this->CompteClient[i];
        this->CompteClient[i] = 0;
    }
        this->CompteClient.clear();
}
