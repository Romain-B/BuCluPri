#include "Abr.h"

//GETTERS

int Abr::cle()
{
  return cle_;
}  

Abr Abr::noeud_g()
{
  return *noeud_g_;
}

Abr Abr::noeud_d()
{
  return *noeud_d_;
}


//METHODS

void Abr::assign(int ncle, Abr)
{
  if (Abr==null)
    return new Abr(null, ncle, null);
  if (ncle < Abr.cle_){this->noeud_g_.assign(ncle, Abr);}
  else if (ncle > Abr.cle_){this->noeud_d_.assign(ncle, Abr);}
  return Abr
}


void Abr::search(int ncle, Abr** p)
{
		if (ncle < this->cle_){
			if (this->noeud_g_ != nullptr){this->noeud_g_.search(ncle, *p);}
		}
		
		if (ncle > this->cle_){
			if (this->noeud_d_ != nullptr){this->noeud_d_.search(ncle, *p);}
		}

		if (ncle == this->cle_){
			*p = &this;}
}

int Abr::max()
{
  if (this->noeud_d_ != nullptr){this->noeud_d_.max();}
  return cle;
  



bool Abr::not_empty()
{
  if (this->noeud_d_ != nullptr || this->noeud_g_ != nullptr)
  {
    return true;
  }
  return true;
}


Abr::Abr(int ncle)
{
  cle_ = ncle;

  noeud_d_ = nullptr;
  noeud_g_ = nullptr;
}




//Abr::~Abr() // A FAIRE PLUS TARD
