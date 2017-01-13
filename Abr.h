#include <stdio.h>
#include <stdlib.h>

class Abr
{
public:
//Getters
  int cle();
  Abr& noeud_g();
  Abr& noeud_d();


//Methods
  void assign(int ncle); 

  bool is_empty();
  bool is_childless();
  int max();
  //void remove(int rcle);

  Abr* search(int ncle);
  int depth();

//Contructeurs 
  Abr();
  Abr(int ncle);
  Abr(const Abr&);

  //~Abr(); A FAIRE PLUS TARD

protected:
private :
  int* cle_;
  Abr* noeud_g_;
  Abr* noeud_d_;

  int* depth_(int dep[]);

  //Setters 
  void droit(int val);
  void gauche(int val);
  
};
