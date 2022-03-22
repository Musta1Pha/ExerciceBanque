#ifndef DEVISE_H
#define DEVISE_H
#include <iostream>

using namespace std;
class Devise
{
    private:
      double Valeur;
    public:
      Devise(double Valeur);
      Devise operator+=(Devise d);
      Devise operator-=(Devise d);
      bool operator>=(const Devise& d)const;
      Devise operator*(Devise d);
      Devise operator*(double Valeur);
      void Afficher()const;
      virtual ~Devise();


};

#endif // DEVISE_H
