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

  if (cle_ != nullptr)
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
  else
  {
    cle_ = new int(ncle);
  }
}



int Abr::depth()
{
  /*
  Wrapper for depth_ function for easier use.
  As a result, depth_ is set as private.
  */

  int dep[2] = {0,0};
  int* res;

  res = this->depth_(dep);

  return res[1];
}



int* Abr::depth_(int dep[])
{
  /*
  Returns array with depth[1] as the max depth.

  dep[0] = curr dep
  dep[1] = max dep
  */

  if (dep[0] >= dep[1])
  {
    dep[1] = dep[0];
  }

  if (noeud_g_ != nullptr)
  {
    ++ dep[0];
    //int tmp[2] = {dep[0]+1, dep[1]};
    dep = (*noeud_g_).depth_(dep);
  }
  if (noeud_d_ != nullptr)
  {
    ++ dep[0];
    //int tmp[2] = {dep[0]+1, dep[1]};
    dep = (*noeud_d_).depth_(dep);
  }
  return dep;

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

  



bool Abr::is_empty()
{
  if (noeud_d_ == nullptr && noeud_g_ == nullptr)
  {
    return true;
  }
  return false;
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
