#ifndef COMPTEPAYANT_H
#define COMPTEPAYANT_H
#include <iostream>

class ComptePayant:public virtual Compte
{
    private:
      static double TauxValue;
    public:
      ComptePayant(Client* Prop,Devise* Solde);
      void ConsulterSolde()const override;
      bool RetirerArgent(Devise Montant);
      virtual ~ComptePayant();


};

#endif // COMPTEPAYANT_H
