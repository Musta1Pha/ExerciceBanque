#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "Operation.h"
#include "Client.h"
#include "Devise.h"
#include <vector>

using namespace std;
class Client;
class Compte{
  private:
      const int NumCompte;
      static int Cpt;
      Client* Prop;
      Devise* Solde;
      vector<Operation> VectOpr;

  public:
      Compte(Client* Prop,Devise* Solde);
      virtual void ConsulterSolde()const;
      virtual void DeposerArgent(Devise Montant);
      virtual bool RetirerArgent(Devise Montant);
      virtual bool TransfererArgent(Compte* c,Devise Montant);
      void MontantInteret(double TauxInt);
      bool CheckSolde(Compte* c);
      virtual ~Compte();

};

#endif
