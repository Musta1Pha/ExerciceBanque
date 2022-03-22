#include "Compte.h"
#include <iostream>

int Compte::Cpt=0;
Compte::Compte(Client* Prop,Devise* Solde):NumCompte(++Compte::Cpt)
{
    this->Prop = Prop;
    this->Solde = Solde;
    this->VectOpr = new vector<Compte*>();
}

void Compte::ConsulterSolde()const
{
    std::cout<<"NumCompte : "<<this->NumCompte<<std::endl;
    std::cout<<"Proprietaire : ";
    this->Prop->Afficher();
    std::cout<<"Solde : ";
    this->Solde->Afficher();
}

void Compte::DeposerArgent(Devise Montant)
{
    *(this->Solde) += Montant;
     this->VectOpr.push_back("+",Montant);
}

bool Compte::RetirerArgent(Devise Montant)
{
    if(*(this->Solde) >= Montant){
      *(this->Solde) -= Montant;
      this->VectOpr.push_back("-",Montant);
        return true;
    }
    else return false;
}

bool Compte::TransfererArgent(Compte* c,Devise Montant)
{
    if(this->RetirerArgent(Montant)){
        c->DeposerArgent(Montant);
        return true;
    }
    else return false;
}

void Compte::MontantInteret(double TauxInt)
{
    Devise d(TauxInt/100);
    *(this->Solde) += *(this->Solde) * d;
}

bool Compte::CheckSolde(Compte* c)
{
    return *(c->Solde) >= 0;
}

Compte::~Compte()
{
    for(int i=0;i<this->VectOpr.size();i++){
        delete this->VectOpr[i];
        this->VectOpr[i] = 0;
    }
        this->VectOpr.clear();
}
