#include "Abr.h"

//GETTERS

int Abr::cle()
{
  return cle_;
}  

Abr& Abr::noeud_g()
{
  return *noeud_g_;
}

Abr& Abr::noeud_d()
{
  return *noeud_d_;
}

//SETTERS BIEN BIEN SALES

void Abr::droit(int val)
{
  Abr* temp = new Abr(val);
  noeud_d_ = temp;
}

void Abr::gauche(int val)
{
  Abr* temp = new Abr(val);
  noeud_g_ = temp;
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


Abr* Abr::search(int ncle)
{
		Abr* p_res = nullptr;

    if (ncle < cle_){
			if (noeud_g_ != nullptr)
        {
          p_res = noeud_g_->search(ncle);
        }
		}
		
		if (ncle > cle_){
			if (noeud_d_ != nullptr)
        {
          p_res = noeud_d_->search(ncle);
        }
		}

		if (ncle == cle_)
    {
			p_res = new Abr(*this);
    }
    return p_res;
}

int Abr::max()
{
  if (this->noeud_d_ != nullptr){this->noeud_d_.max();}
  return cle;
  



bool Abr::not_empty()
{
  if (noeud_d_ != nullptr || noeud_g_ != nullptr)
  {
    return true;
  }
  return true;
}



//CONSTRUCTEUR

Abr::Abr(int ncle)
{
  cle_ = ncle;

  noeud_d_ = nullptr;
  noeud_g_ = nullptr;
}

Abr::Abr(const Abr &cp)
{
  cle_ = cp.cle_;

  noeud_d_ = cp.noeud_d_;
  noeud_g_ = cp.noeud_g_;

}




//Abr::~Abr() // A FAIRE PLUS TARD
