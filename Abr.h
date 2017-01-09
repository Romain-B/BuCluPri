#include <stdio.h>
#include <stdlib.h>

class Abr
{
public:
//Getters
  int cle();
  Abr& noeud_g();
  Abr& noeud_d();

//Setters bien bien sale
  void droit(int val);
  void gauche(int val);


//Methods
  void assign(int ncle); 
  bool not_empty();
  //void remove(int rcle);

  Abr* search(int ncle);

//Contructeurs 
  Abr(int ncle);
  Abr(const Abr&);

  //~Abr(); A FAIRE PLUS TARD

protected:
private :
  int cle_;
  Abr* noeud_g_;
  Abr* noeud_d_;
  
};
