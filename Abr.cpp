#include "Abr.h"

//GETTERS

int Abr::cle()
{
  return *cle_;
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

void Abr::assign(int ncle)
{

  if (ncle < *cle_)
  {
    if(noeud_g_ != nullptr)
    {
      noeud_g_->assign(ncle);
    }
    else 
    {
      this->gauche(ncle);      
    }
  }
  
  else if (ncle > *cle_)
  {
    if(noeud_d_ != nullptr)
    {
      noeud_d_->assign(ncle);
    }
    else 
    {
      this->droit(ncle);
    }
  }
}


int* Abr::depth(int dep[])
{
  //dep[0] = curr dep
  //dep[1] = max dep

  int* res;

  if (dep[0] >= dep[1])
  {
    dep[1] = dep[0];
  }

  if (noeud_g_ != nullptr)
  {
    int tmp[2] = {dep[0]+1, dep[1]};
    res = (*noeud_g_).depth(tmp);
  }
  if (noeud_d_ != nullptr)
  {
    int tmp[2] = {dep[0]+1, dep[1]};
    res = (*noeud_d_).depth(tmp);
  }
  return res;

}


Abr* Abr::search(int ncle)
{
		Abr* p_res = nullptr;

    if (ncle < *cle_){
			if (noeud_g_ != nullptr)
        {
          p_res = noeud_g_->search(ncle);
        }
		}
		
		if (ncle > *cle_){
			if (noeud_d_ != nullptr)
        {
          p_res = noeud_d_->search(ncle);
        }
		}

		if (ncle == *cle_)
    {
			p_res = new Abr(*this);
    }
    return p_res;
}

int Abr::max()
{
  int mx;

  if (noeud_d_ != nullptr)
  {
      mx = noeud_d_->max();
  }
  else
  {
    return *cle_;
  }
  return mx;

}

  



bool Abr::not_empty()
{
  if (noeud_d_ == nullptr && noeud_g_ == nullptr)
  {
    return false;
  }
  return true;
}



//CONSTRUCTEUR

Abr::Abr()
{
  cle_ = nullptr;

  noeud_d_ = nullptr;
  noeud_g_ = nullptr;
}

Abr::Abr(int ncle)
{
  cle_ = new int(ncle);

  noeud_d_ = nullptr;
  noeud_g_ = nullptr;
}

Abr::Abr(const Abr &cp)
{
  cle_ = new int(*(cp.cle_));

  noeud_d_ = cp.noeud_d_;
  noeud_g_ = cp.noeud_g_;

}




//Abr::~Abr() // A FAIRE PLUS TARD
