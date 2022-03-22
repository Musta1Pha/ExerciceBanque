#include "Operation.h"

Operation::Operation(string Libelle,Devise Montant)
{
    this->Libelle = Libelle;
    this->Montant = Montant;
}

void Operation::Afficher()const
{
    std::cout<<"Libelle : "<<this->Libelle<<std::endl;
    std::cout<<"Montant : ";
    this->Montant.Afficher();
}

Operation::~Operation()
{

}
