#ifndef COMPTEEPARGNEPAYANT_H
#define COMPTEEPARGNEPAYANT_H


class CompteEpargnePayant:public CompteEpargne,public ComptePayant
{
    private:

    public:
      CompteEpargnePayant(Client* Prop,Devise* Solde,double TauxInteret);
      const ConsulterSolde()const override;
      void DeposerArgent(Devise Montant)override;
      bool RetirerArgent(Devise Montant)override;
      virtual ~CompteEpargnePayant();


};

#endif // COMPTEEPARGNEPAYANT_H
