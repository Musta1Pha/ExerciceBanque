#ifndef APP_BANQUE_H
#define APP_BANQUE_H
#include <iostream>
#include "Compte.h"
#include "CompteEpargne.h"
#include "ComptePayant.h"
#include "Operation.h"
#include "Devise.h"
#include <vector>

class App_Banque
{
    private:
      vector<Compte*> VectCompteBc;
    public:
      App_Banque();
      void AjouterCompteBc(Compte* c);
      void Afficher()const;
      const Compte& operator[](int Index);
      virtual ~App_Banque();



};

#endif // APP_BANQUE_H*/
