#include "Abr.h"

//GETTERS

int Abr::cle()
{
  return cle_;
}  

Abr Abr::noeud_g()
{
  return noeud_g_;
}

Abr Abr::noeud_d()
{
  return noeud_d_;
}


//METHODS

void Abr::assign(int ncle)
{
  int i = 0;
  //FAUDRA FAIRE...
}


//METHODS

Abr::Abr(int ncle)
{
  cle_ = ncle;

  noeud_d_ = nullptr;
  noeud_g_ = nullptr;
}


//Abr::~Abr() // A FAIRE PLUS TARD
