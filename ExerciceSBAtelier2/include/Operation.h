#ifndef OPERATION_H
#define OPERATION_H
#include <iostream>
#include "Devise.h"

using namespace std;
class Operation
{
    private:
      const int NumOp;
      static int Cpt;
      Devise Montant;
      string Libelle;
    public:
      Operation(string Libelle,Devise Montant);
      void Afficher()const;
      virtual ~Operation();

};

#endif // OPERATION_H
