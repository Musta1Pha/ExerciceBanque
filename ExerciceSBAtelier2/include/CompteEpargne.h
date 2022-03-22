#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include <iostream>
#include "Compte.h"

class CompteEpargne:public virtual Compte
{
    private:
      double TauxInteret;
    public:
      CompteEpargne(Client* Prop,Devise* Solde,double TauxInteret);
      void ConsulterSolde()const override;
      void CalculInteret();
      virtual ~CompteEpargne();
};

#endif // COMPTEEPARGNE_H
