#include "Devise.h"

Devise::Devise(double Valeur)
{
    this->Valeur = Valeur;
}

Devise Devise::operator+=(Devise d)
{
    this->Valeur += d.Valeur;
    return *this;
}

Devise Devise::operator-=(Devise d)
{
    this->Valeur -= d.Valeur;
    return *this;
}

Devise Devise::operator*(Devise d)
{
    this->Valeur = this->Valeur * d.Valeur;
    return *this;
}

Devise Devise::operator*(double Valeur)
{
    this->Valeur = this->Valeur * Valeur;
    return *this;
}

bool Devise::operator>=(const Devise& d)const
{
    return this->Valeur >= d.Valeur;
}


void Devise::Afficher()const
{
    std::cout<<"Valeur : "<<this->Valeur<<std::endl;
}

Devise::~Devise()
{

}
