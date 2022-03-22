#include "App_Banque.h"
#include <assert.h>

App_Banque::App_Banque()
{
    this->VectCompteBc = new vector<Compte*>();
}

void App_Banque::AjouterCompteBc(Compte* c)
{
    this->VectCompteBc.push_back(c);
}

void App_Banque::Afficher()const
{
    for(int i=0;i<this->VectCompteBc.size();i++){
       this->VectCompteBc[i]->ConsulterSolde();
    }
}

const Compte& App_Banque::operator[](int Index)
{
    assert(Index >=0 && Index <= this->VectCompteBc.size());
    return *this->VectCompteBc[Index];
}

App_Banque::~App_Banque()
{
    for(int i=0;i<this->VectCompteBc.size();i++){
        delete this->VectCompteBc[i];
        this->VectCompteBc[i] = 0;
    }
        this->VectCompteBc.clear();
}
