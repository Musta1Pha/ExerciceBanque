#include "ComptePayant.h"

double ComptePayant::TauxValue=5;
ComptePayant::ComptePayant(Client* Prop,Devise* Solde):Compte(Prop,Solde)
{

}

void ComptePayant::ConsulterSolde()
{
   ComptePayant Cp;

   if(typeid(*this).name() == typeid(Cp).name())
   this->Compte::ConsulterSolde();
   std::cout<<ComptePayant::TauxValue<<std::endl
}

bool ComptePayant::RetirerArgent(Devise Montant)
{
   Devise d(Taux/100);
   this->Compte::RetirerArgent(Montant + (Montant * d));
}

ComptePayant::~ComptePayant()
{

}
