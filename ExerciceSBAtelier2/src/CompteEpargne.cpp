#include "CompteEpargne.h"
#include <assert.h>
#include <typeinfo>

CompteEpargne::CompteEpargne(Client* Prop,Devise* Solde,double TauxInteret):Compte(Prop,Solde)
{
    assert(TauxInteret >=0 && TauxInteret<=100):
    this->TauxInteret = TauxInteret;
}

void CompteEpargne::ConsulterSolde()const
{
    CompteEpargne Cp;

    if(typeid(*this).name() == typeid(Cp).name())
    this->Compte::ConsulterSolde();
    std::cout<<"Taux Interert : "<<this->TauxInteret<<std::endl;
}

void CompteEpargne::CalculInteret()
{
    this->Compte::MontantInteret(this->TauxInteret);
}

CompteEpargne::~CompteEpargne()
{

}
