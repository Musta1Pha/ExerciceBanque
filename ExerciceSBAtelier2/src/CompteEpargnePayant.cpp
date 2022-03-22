#include "CompteEpargnePayant.h"

CompteEpargnePayant::CompteEpargnePayant(Client* Prop,Devise* Solde,double TauxInteret):CompteEpargne(Prop,Solde,TauxInteret),
ComptePayant(Prop,Solde),Compte(Prop,Solde)
{

}

void CompteEpargnePayant::ConsulterSolde() const
{
    this->Compte::ConsulterSolde();
    this->CompteEpargne::ConsulterSolde();
    this->ComptePayant::ConsulterSolde();
}

void CompteEpargnePayant::DeposerArgent(Devise Montant)
{
    this->Compte::DeposerArgent(Montant);
}

bool CompteEpargnePayant::RetirerArgent(Devise Montant)
{
    this->ComptePayant::RetirerArgent(Montant);
}



CompteEpargnePayant::~CompteEpargnePayant()
{

}
